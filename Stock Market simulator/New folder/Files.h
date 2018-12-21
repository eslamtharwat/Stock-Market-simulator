#pragma once
#include <fstream>
#include <string>
using namespace std;

class Files
{
public:
	const char * bankpath;
	const char * userpath;
	const char * stockspath;
	const char * buypath;
	const char * sellpath;
	const char * portfilopath;
	const char * offerspath;
	const char * notificationpath;
	const char * historypath;
	const char * temppath;
	Files();
};