#include "client.h"

vector<Trade> Client::showoallffers(int id)
{
	fstream file;
	vector<Trade> trade;
	file.open(offerspath, ios::in | ios::binary);
	while (!file.eof())
	{
		Trade* item = new Trade;
		file.read((char *)(item), sizeof(Trade));
		if (item->method != "" && item->id == id)
			trade.push_back(*item);
	}
	file.close();
	if (trade.empty())
		throw"Sorry , You don't have Offers";
	return trade;
}
void Client::Deleteoffer(Trade*trade)
{
	fstream file;
	file.open(offerspath, ios::in | ios::binary);
	ofstream temp;
	temp.open("Temp", ios::out | ios::binary);
	while (!file.eof())
	{
		Trade* item = new Trade;
		file.read((char *)(item), sizeof(Trade));
		if (item != trade && item->stock_id != "")
			temp.write((char *)(item), sizeof(Trade));
	}
	file.close();
	temp.close();
	remove(offerspath);
	rename("Temp", offerspath);
}