#include "sell.h"
bool Sell::offer_sell()
{
	Portfilo p;
	Notification n;
	ostringstream note;
	p.search_portfilo(id);
	if (p.getquantity(id, stock_id) < quantity)
	{
		throw "Not much stock quantity";
		return false;
	}
	note << "your broker offers selling " << quantity << " of your stock " << stock_id << " with " << (price + Commission + broker_Commission)*quantity << " $" << endl;
	n.create_Notification(id, note.str());
	return true;
}
bool Sell::selling()
{
	Portfilo p;
	Bank b;
	p.search_portfilo(id);
	b.load_bank(id);
	if (get_sell_max() < price)
	{
		throw ("Wrong price, the maximum sell price = %.2f", get_sell_max());
		return false;
	}
	if (p.getquantity(id, stock_id) < quantity)
	{
		throw "Not much stock quantity";
		return false;
	}
	save_market_sell();
	return true;
}
bool Sell::save_market_sell()
{
	ifstream file;
	ofstream temp;
	string file_stock, line;
	float file_price;
	file.open("stock_market_sell.csv", ios::in);
	if (!file.is_open())
	{
		temp.open("stock_market_sell.csv", ios::out);
		temp.close();
		file.open("stock_market_sell.csv", ios::in);
	}
	temp.open("stock_market_sell.temp", ios::out);
	while (getline(file, file_stock, ',') && !file.eof())
	{
		while (file_stock == stock_id)
		{
			file >> file_price;
			if (file_price <= price)
			{
				getline(file, line);
				temp << file_stock << ',' << file_price << line << endl;
			}
			else if (file_price > price)
			{
				getline(file, line, '\0');
				temp << stock_id << ',' << price << ',' << quantity << ',' << id << endl << file_stock << ',' << file_price << line;
				file.close();
				temp.close();
				remove("stock_market_sell.csv");
				rename("stock_market_sell.temp", "stock_market_buy.csv");
				return true;
			}
			file_stock = "";
			getline(file, file_stock, ',');
			if (file_stock != stock_id && file_stock == "")
			{
				if (file_stock == "")
					goto pr;
				getline(file, line);
				temp << stock_id << ',' << price << ',' << quantity << ',' << id << endl << file_stock << ',' << line;
				file.close();
				temp.close();
				remove("stock_market_buy.csv");
				rename("stock_market_buy.temp", "stock_market_buy.csv");
				return true;
			}
		}
		getline(file, line);
		temp << file_stock << ',' << line << endl;
	}
pr:
	temp << stock_id << ',' << price << ',' << quantity << ',' << id;
	file.close();
	temp.close();
	remove("stock_market_sell.csv");
	rename("stock_market_sell.temp", "stock_market_sell.csv");
	return true;
}
bool Sell::delete_market_sell(string stock, int count)
{
	ifstream file;
	ofstream temp;
	string file_stock, line;
	file.open("stock_market_sell.csv", ios::in);
	if (!file.is_open())
	{
		throw"market file not found";
		return false;
	}
	temp.open("stock_market_sell.temp", ios::out);
	while (getline(file, file_stock, ',') && !file.eof())
	{
		if (file_stock == stock)
		{
			for (int i = 0; i < count; i++)
				file.ignore(200, '\n');
			getline(file, line, '\0');
			temp << line;
			file.close();
			temp.close();
			remove("stock_market_sell.csv");
			rename("stock_market_sell.temp", "stock_market_sell.csv");
			return true;
		}
		getline(file, line);
		temp << file_stock << ',' << line << endl;
	}
	throw"stock not found";
	file.close();
	temp.close();
	remove("stock_market_sell.temp");
	return false;
}
bool Sell::update_market_sell()
{
	ifstream file;
	ofstream temp;
	string stock_id, line;
	float price;
	int id, quantity;
	file.open("stock_market_sell.csv", ios::in);
	if (!file.is_open())
	{
		throw "market not found";
		return false;
	}
	temp.open("stock_market_sell.temp", ios::out);
	while (getline(file, stock_id, ',') && !file.eof())
	{
		while (this->stock_id == stock_id)
		{
			file >> price;
			file.ignore();
			file >> quantity;
			file.ignore();
			file >> id;
			file.ignore();
			if (this->price == price && this->id == id)
			{
				getline(file, line, '\0');
				temp << stock_id << ',' << price << ',' << this->quantity << ',' << id << line;
				file.close();
				temp.close();
				remove("stock_market_sell.csv");
				rename("stock_market_sell.temp", "stock_market_sell.csv");
				return true;
			}
			temp << stock_id << ',' << price << ',' << quantity << ',' << id << endl;
			getline(file, stock_id, ',');
			if (this->stock_id != stock_id)
			{
				file.close();
				temp.close();
				remove("stock_market_sell.temp");
				throw"order not found";
				return false;
			}
		}
		getline(file, line);
		temp << stock_id << ',' << line << endl;
	}
	file.close();
	temp.close();
	remove("stock_market_sell.temp");
	return false;
}
