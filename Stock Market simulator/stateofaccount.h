#pragma once
#include <string>
#include <fstream>
#include <vector>
#include <ctime>
using namespace std;
class Stateofaccount
{
private:
	time_t t;
	struct tm * now;
public:
	bool create_state(int, string);
	vector<string> read_state(int);
};