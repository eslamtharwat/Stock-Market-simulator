#pragma once
#include <string>
#include <fstream>
#include <vector>
#define stockpath "Stocks.dat"
using namespace std;
class Stocks
{
private:
	string company_name;
protected:
	string stock_id;
	float price;
	float close_price;
public:
	void setprice(float);
	void setclose_price(float);

	string getcompany_name();
	float getprice();
	float getclose_price();
	string getstock_id();

	vector<Stocks> Display_all();
	void add_stock(Stocks*);
	Stocks search_stock(string);
	bool update_stock(Stocks*);
};