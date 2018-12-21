#pragma once
#include <string>
#include <fstream>
using namespace std;
#define bankpath "bank.dat"
class Bank
{
private:
	float balance;
	char bank_name[30];

public:
	int id;
	Bank();

	float getbalance();
	string getbank_name();

	void setbank_name(string);

	Bank operator+(float);
	Bank operator-(float);

	void add_Bank(Bank*);
	Bank search_Bank(int);
	bool update_Bank(Bank*);
};