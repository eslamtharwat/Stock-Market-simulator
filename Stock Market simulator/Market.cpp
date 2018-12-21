#include "Market.h"

bool Market::buying(Trade *trade)
{
	bank.search_Bank(trade->id);
	if (get_buy_min(trade) > trade->price)
	{
		throw ("Wrong price, the minimum buy price = %.2f", get_buy_min(trade));
		return false;
	}
	if (bank.getbalance() < (trade->price)*quantity)
	{
		throw "no enough credit";
		return false;
	}
	trade->method = "buy";
	add_Market(trade);
	return true;
}
bool Market::selling(Trade *trade)
{
	portfilo.search_portfilo(trade->id);
	bank.search_Bank(trade->id);
	if (get_sell_max(trade) < trade->price)
	{
		throw ("Wrong price, the maximum sell price = %.2f", get_sell_max(trade));
		return false;
	}
	if (portfilo.getquantity() < trade->quantity)
	{
		throw "Not much stock quantity";
		return false;
	}
	trade->method = "sell";
	add_Market(trade);
	return true;
}

bool Market::add_Market(Trade *trade)
{
	fstream  file;
	file.open(marketpath, ios::in | ios::binary | ios::app);
	file.write((char *)(trade), sizeof(Trade));
	file.close();
	return true;
}
bool Market::delete_Market(Trade *trade)
{
	fstream  file;
	file.open(marketpath, ios::in | ios::binary);
	ofstream temp;
	temp.open("Temp", ios::out | ios::binary);
	while (!file.eof())
	{
		Trade* item = new Trade;
		file.read((char *)(item), sizeof(Trade));
		if (trade != item)
			temp.write((char *)(item), sizeof(Trade));
	}
	file.close();
	temp.close();
	remove(marketpath);
	rename("Temp", marketpath);
	return true;
}
vector<Trade> Market::search_Market(string stock_id, string method)
{
	fstream  file;
	vector<Trade> trade;
	file.open(marketpath, ios::in | ios::binary);
	while (!file.eof())
	{
		Trade* item = new Trade;
		file.read((char *)(item), sizeof(Trade));
		if (item->method != "" && item->stock_id == stock_id && item->method == method)
			trade.push_back(*item);
	}
	file.close();
	return trade;
}
bool Market::update_Market(Trade* trade)
{
	fstream  file;
	file.open(marketpath, ios::in | ios::out | ios::binary);
	while (!file.eof())
	{
		streamoff recordStartPosition = file.tellg();
		Trade* item = new Trade;
		file.read((char *)(item), sizeof(Trade));
		if (item->method != "" && trade->id == item->id && trade->method == item->method &&trade->stock_id == item->stock_id && item->price == trade->price)
		{
			file.seekp(recordStartPosition);
			file.write((char *)(trade), sizeof(Trade));
			file.close();
			return true;
		}
	}
	throw "User or stock not found";
	file.close();
	return false;
}

float Market::get_buy_min(Trade *trade)
{
	fstream  file;
	float min = 0;
	file.open(marketpath, ios::in | ios::binary);
	while (!file.eof())
	{
		Trade* item = new Trade;
		file.read((char *)(item), sizeof(Trade));
		if (item->stock_id != "" && item->method == "buy"&& trade->stock_id == item->stock_id && (min > item->price || min == 0))
			min = item->price;
	}
	file.close();
	if (min != 0)
		return min;
	else
		throw "User or stock not found";
}
float Market::get_sell_max(Trade *trade)
{
	fstream  file;
	float max = 0;
	file.open(marketpath, ios::in | ios::binary);
	while (!file.eof())
	{
		Trade* item = new Trade;
		file.read((char *)(item), sizeof(Trade));
		if (item->stock_id != "" && item->method == "buy"&& trade->stock_id == item->stock_id && (max > item->price || max == 0))
			max = item->price;
	}
	file.close();
	if (max != 0)
		return max;
	else
		throw "User or stock not found";
}