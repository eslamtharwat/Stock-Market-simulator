#include"Broker.h"
void Broker::make_offer(Trade *t)
{
	fstream file;
	file.open(offerspath, ios::in | ios::binary | ios::app);
	file.write((char *)(t), sizeof(Trade));
	file.close();
}

vector<Broker> Broker::Display_All_clients()
{
	fstream file;
	vector<Broker> persons;
	file.open(userpath, ios::in | ios::binary);
	while (!file.eof())
	{
		Broker* item = new Broker;
		file.read((char *)(item), sizeof(Broker));
		if (item->type == "ClientB" && item->broker_id == id)
			persons.push_back(*item);
	}
	file.close();
	return persons;
}