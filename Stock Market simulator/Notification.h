#pragma once
#include <string>
#include <fstream>
#include <vector>
#define notificationpath "Notification"
using namespace std;
class Notification
{
private:
	int N_count;
public:
	Notification();

	int Notification_Number(int);
	bool create_Notification(int,string);
	vector<string> read_Notification(int);
	bool delete_Notification(int);
};