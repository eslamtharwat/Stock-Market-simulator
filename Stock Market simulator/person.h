#pragma once
#include <string>
#include <fstream>
#include "bank.h"
#define userpath "users.dat"
class Person
{
protected:
	char gender[10];
	char NID[14];
	char name[30];
	char pass[30];
	char phone[30];
	char email[30];
	char type[30];
	int broker_id;
public:
	int  id;

	Person();

	void setgender(string);
	void setNID(string);
	void setname(string);
	void setpass(string);
	void setphone(string);
	void setemail(string);
	void settype(string);
	void setbroker_id(int);

	string getgender();
	string getNID();
	string getname();
	string getpass();
	string getphone();
	string getemail();
	string gettype();
	int getbroker_id();

	int add_person(Person*);
	Person search_person(int);
	bool update_person(Person*);
};