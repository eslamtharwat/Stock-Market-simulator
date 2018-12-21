#pragma once 
#include <string>
#include <vector>
#include "person.h"
using namespace std;

class Admin : public Person
{
public:
	bool delete_person(int);
	vector<Admin> DisplayAll();
};