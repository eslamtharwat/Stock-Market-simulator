#pragma once
#include "person.h"
#include "trade.h"
#include <string>
#include <vector>
#define offerspath "offers.dat"
class Client:public Person
{
public:
	Bank *bank;
	vector<Trade> showoallffers(int);
	void Deleteoffer(Trade*);
};