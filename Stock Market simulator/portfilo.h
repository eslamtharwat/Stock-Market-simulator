#pragma once
#include <string>
#include <fstream>
#include <vector>
#include "stocks.h"
#define portfilospath "portfilo.dat"
using namespace std;
class Portfilo
{
private:
	string stock_name;
	int quantity;
	float stock_price;
public:
	int id;

	float stock_total_cost();

	string getstock_name();
	int getquantity();
	float getstock_price();

	void add_portfilo(Portfilo*);
	bool update_portfilo(Portfilo*);
	vector<Portfilo> search_portfilo(int);
	Portfilo search_portfilo(int, string);
};