#include "person.h"

Person::Person()
{
	id = 20130000;
	string x;
	*NID = *x.c_str();
	*pass = *x.c_str();
	*name = *x.c_str();
	*phone = *x.c_str();
	*email = *x.c_str();
	*type = *x.c_str();
	*gender = *x.c_str();
	broker_id = NULL;
	
}

void Person::setgender(string gender)
{
	*this->gender = *gender.c_str();
}
void Person::setNID(string NID)
{
	*this->NID = *NID.c_str();
}
void Person::setname(string name)
{
	*this->name = *name.c_str();
}
void Person::setpass(string pass)
{
	*this->pass = *pass.c_str();
}
void Person::setphone(string phone)
{
	*this->phone = *phone.c_str();
}
void Person::setemail(string email)
{
	*this->email = *email.c_str();
}
void Person::settype(string type)
{
	*this->type = *type.c_str();
}

string Person::getgender()
{
	return gender;
}
string Person::getNID()
{
	return NID;
}
string Person::getname()
{
	return name;
}
string Person::getpass()
{
	return pass;
}
string Person::getphone()
{
	return phone;
}
string Person::getemail()
{
	return email;
}
string Person::gettype()
{
	return type;
}

int Person::add_person(Person *person)
{
	fstream  file;
	file.open(userpath, ios::out | ios::binary);
	if (!file.is_open())
		throw"user file not open";
	while (!file.eof())
	{
		Person* item = new Person;
		file.read((char *)(item), sizeof(Person));
		if (item->name != "")
			id = item->id;
	}
	file.close();
	file.open(userpath, ios::in | ios::binary | ios::app);
	person->id = id + 1;
	file.write((char *)(person), sizeof(Person));
	file.close();
	return id;
}
Person Person::search_person(int id)
{
	fstream  file;
	file.open(userpath, ios::in | ios::binary);
	if (!file.is_open())
		throw"user file not found";
	while (!file.eof())
	{
		Person* item = new Person;
		file.read((char *)(item), sizeof(Person));
		if (item->name != "" && id == item->id)
		{
			file.close();
			return *item;
		}
	}
	throw "User not found";
	file.close();
}
bool Person::update_person(Person* person)
{
	fstream  file;
	file.open(userpath, ios::in | ios::out | ios::binary);
	while (!file.eof())
	{
		streamoff recordStartPosition = file.tellg();
		Person* item = new Person;
		file.read((char *)(item), sizeof(Person));
		if (item->name != "" && person->id == item->id)
		{
			file.seekp(recordStartPosition);
			file.write((char *)(person), sizeof(Person));
			file.close();
			return true;
		}
	}
	throw "User not found";
	file.close();
	return false;
}