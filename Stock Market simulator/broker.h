#include"trade.h"
#include "person.h"
#define offerspath "offers.dat"
class Broker : public Person
{
public:
	void make_offer(Trade *r);
	vector<Broker> Display_All_clients();
};