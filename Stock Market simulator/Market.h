#pragma once
#include "trade.h"
#define marketpath "market.dat"
class Market :public Trade
{
private:
	Bank bank;
	Portfilo portfilo;
public:
	bool buying(Trade*);
	bool selling(Trade*);

	bool add_Market(Trade*);
	bool delete_Market(Trade*);
	vector<Trade> search_Market(string, string);
	bool update_Market(Trade*);

	float get_buy_min(Trade*);
	float get_sell_max(Trade*);
};

