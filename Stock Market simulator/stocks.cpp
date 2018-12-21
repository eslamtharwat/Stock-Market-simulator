#include "stocks.h"

void Stocks::setprice(float price)
{
	this->price = price;
}
void Stocks::setclose_price(float close_price)
{
	this->close_price = close_price;
}

string Stocks::getcompany_name()
{
	return company_name;
}
float Stocks::getprice()
{
	return price;
}
float Stocks::getclose_price()
{
	return close_price;
}

string Stocks::getstock_id()
{
	return stock_id;
}
vector<Stocks> Stocks::Display_all()
{
	fstream file;
	vector<Stocks> stocks;
	file.open(stockpath, ios::in | ios::binary);
	while (!file.eof())
	{
		Stocks* item = new Stocks;
		file.read((char *)(item), sizeof(Stocks));
		if (item->company_name != "")
			stocks.push_back(*item);
	}
	file.close();
	return stocks;
}
void Stocks::add_stock(Stocks *stock)
{
	fstream file;
	file.open(stockpath, ios::in | ios::binary | ios::app);
	file.write((char *)(stock), sizeof(Stocks));
	file.close();
}
Stocks Stocks::search_stock(string stock_id)
{
	fstream file;
	file.open(stockpath, ios::in | ios::binary);
	while (!file.eof())
	{
		Stocks* item = new Stocks;
		file.read((char *)(item), sizeof(Stocks));
		if (item->company_name != "" && stock_id == item->stock_id)
		{
			file.close();
			return *item;
		}
	}
	throw "Stock not found";
	file.close();
}
bool Stocks::update_stock(Stocks *stock)
{
	fstream file;
	file.open(stockpath, ios::in | ios::out | ios::binary);
	while (!file.eof())
	{
		streamoff recordStartPosition = file.tellg();
		Stocks* item = new Stocks;
		file.read((char *)(item), sizeof(Stocks));
		if (item->company_name != "" && stock->stock_id == item->stock_id)
		{
			file.seekp(recordStartPosition);
			file.write((char *)(stock), sizeof(Stocks));
			file.close();
			return true;
		}
	}
	throw "Stock not found";
	file.close();
	return false;
}