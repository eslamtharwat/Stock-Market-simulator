#pragma once
#include <string>
#include <fstream>
#include <sstream>
#include "portfilo.h"
#include "bank.h"
#include "Notification.h"
using namespace std;
class Trade
{
protected:
	float Commission;
	float broker_Commission;
public:
	char* method;
	char* stock_id;
	float price;
	int quantity;
	int id;

	Trade();

	void setCommission(float);
	void setbroker_Commission(float);
	
	float getCommission();
	float getbroker_Commission();
};