#pragma once
#include "trade.h"
class Sell :
	public Trade
{
public:
	bool offer_sell();
	bool selling();
	bool save_market_sell();
	bool delete_market_sell(string, int);
	bool update_market_sell();
	float get_sell_max();
};