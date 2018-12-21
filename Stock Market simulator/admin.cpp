#include"Admin.h"

bool Admin::delete_person(int id)
{
	fstream file;
	file.open(userpath, ios::in | ios::binary);
	ofstream temp;
	temp.open("Temp", ios::out | ios::binary);
	while (!file.eof())
	{
		Admin* item = new Admin;
		file.read((char *)(item), sizeof(Admin));
		if (id != item->id && item->name != "")
			temp.write((char *)(item), sizeof(Admin));
	}
	file.close();
	temp.close();
	remove(userpath);
	rename("Temp", userpath);
	return true;
}
vector<Admin> Admin::DisplayAll()
{
	fstream file;
	vector<Admin> persons;
	file.open(userpath, ios::in | ios::binary);
	while (!file.eof())
	{
		Admin* item = new Admin;
		file.read((char *)(item), sizeof(Admin));
		if (item->name != "")
			persons.push_back(*item);
	}
	file.close();
	return persons;
}