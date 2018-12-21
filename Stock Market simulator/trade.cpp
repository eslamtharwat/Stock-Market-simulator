#include "trade.h"

Trade::Trade()
{
	Commission = (float)0.05;
	broker_Commission = 0.25;
}

void Trade::setCommission(float Commission)
{
	this->Commission = Commission;
}
void Trade::setbroker_Commission(float broker_Commission)
{
	this->broker_Commission = broker_Commission;
}

float Trade::getCommission()
{
	return Commission;
}
float Trade::getbroker_Commission()
{
	return broker_Commission;
}