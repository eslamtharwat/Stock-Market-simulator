#include "portfilo.h"

float Portfilo::stock_total_cost()
{
	return quantity*stock_price;
}

string Portfilo::getstock_name()
{
	return stock_name;
}
int Portfilo::getquantity()
{
	return quantity;
}
float Portfilo::getstock_price()
{
	return stock_price;
}

void Portfilo::add_portfilo(Portfilo *portfilo)
{
	fstream file;
	file.open(portfilospath, ios::in | ios::binary | ios::app);
	file.write((char *)(portfilo), sizeof(Portfilo));
	file.close();
}
vector<Portfilo> Portfilo::search_portfilo(int id)
{
	fstream  file;
	vector<Portfilo> portfilo;
	file.open(portfilospath, ios::in | ios::binary);
	while (!file.eof())
	{
		Portfilo* item = new Portfilo;
		file.read((char *)(item), sizeof(Portfilo));
		if (item->stock_name != "" && id == item->id)
		{
			file.close();
			portfilo.push_back(*item);
		}
	}
	return portfilo;
	file.close();
}
Portfilo Portfilo::search_portfilo(int id, string stock_name)
{
	fstream  file;
	vector<Portfilo> portfilo;
	file.open(portfilospath, ios::in | ios::binary);
	while (!file.eof())
	{
		Portfilo* item = new Portfilo;
		file.read((char *)(item), sizeof(Portfilo));
		if (item->stock_name != "" && id == item->id && stock_name == item->stock_name)
		{
			file.close();
			return *item;
		}
	}
	throw"Portfilo not found";
	file.close();
}
bool Portfilo::update_portfilo(Portfilo* portfilo)
{
	fstream file;
	file.open(portfilospath, ios::in | ios::out | ios::binary);
	while (!file.eof())
	{
		streamoff recordStartPosition = file.tellg();
		Portfilo* item = new Portfilo;
		file.read((char *)(item), sizeof(Portfilo));
		if (item->stock_name != "" && portfilo->id == item->id && portfilo->stock_name == item->stock_name)
		{
			file.seekp(recordStartPosition);
			file.write((char *)(portfilo), sizeof(Portfilo));
			file.close();
			return true;
		}
	}
	throw "User or stock not found";
	file.close();
	return false;
}