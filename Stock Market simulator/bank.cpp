#include "bank.h"

Bank::Bank()
{
	balance = 0;
	string x;
	*bank_name = *x.c_str();
}

float Bank::getbalance()
{
	return balance;
}
string Bank::getbank_name()
{
	return bank_name;
}

void Bank::setbank_name(string bank_name)
{
	*this->bank_name = *bank_name.c_str();
}

Bank Bank::operator+(float cash)
{
	Bank bank;
	bank.balance = balance + cash;
	*bank.bank_name = *bank_name;
	bank.id = id;
	return bank;
}
Bank Bank::operator-(float cash)
{
	if (cash > balance)
		throw"not enough balance";
	Bank bank;
	bank.balance = balance - cash;
	*bank.bank_name = *bank_name;
	bank.id = id;
	return bank;
}

void Bank::add_Bank(Bank *bank)
{
	fstream file;
	file.open(bankpath, ios::in | ios::binary | ios::app);
	if (!file.is_open())
		throw"user file not open";
	file.write((char *)(bank), sizeof(Bank));
	file.close();
}
Bank Bank::search_Bank(int id)
{
	fstream file;
	file.open(bankpath, ios::in | ios::binary);
	while (!file.eof())
	{
		Bank* item = new Bank;
		file.read((char *)(item), sizeof(Bank));
		if (item->bank_name != "" && id == item->id)
		{
			file.close();
			return *item;
		}
	}
	throw "User not found";
	file.close();
}
bool Bank::update_Bank(Bank* bank)
{
	fstream file;
	file.open(bankpath, ios::in | ios::out | ios::binary);
	while (!file.eof())
	{
		streamoff recordStartPosition = file.tellg();
		Bank* item = new Bank;
		file.read((char *)(item), sizeof(Bank));
		if (item->bank_name != "" && bank->id == item->id)
		{
			file.seekp(recordStartPosition);
			file.write((char *)(bank), sizeof(Bank));
			file.close();
			return true;
		}
	}
	throw "User not found";
	file.close();
	return false;
}