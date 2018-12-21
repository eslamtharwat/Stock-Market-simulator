#include "Notification.h"


Notification::Notification()
{
	N_count = 0;
}

int Notification::Notification_Number(int id)
{
	ifstream file;
	file.open(notificationpath, ios::in);
	int file_id, not;
	if (!file.is_open())
		throw"Notification file not found";
	else
	{
		while (file >> file_id)
		{
			if (file_id == id)
			{
				file.ignore();
				file >> not;
				file.close();
				return not;
			}
			else
			{
				file.ignore(2000, '*');
				file.ignore(100, '\n');
			}
		}
		file.close();
		return 0;
	}
}
bool Notification::create_Notification(int id, string note)
{
	ifstream file;
	ofstream temp;
	int file_id, not;
	string line;
	file.open(notificationpath, ios::in);
	if (!file.is_open())
	{
		temp.open(notificationpath, ios::out);
		temp.close();
		file.open(notificationpath, ios::in);
	}
	temp.open("Temp", ios::out);
	while (file >> file_id)
	{
		if (file_id == id)
		{
			file.ignore();
			temp << id << endl;
			file >> not;
			temp << not << endl;
			for (int i = 0; i < not; i++)
			{
				getline(file, line);
				temp << line << endl;
			}
			temp << not + 1 << endl << " - " << note;
			getline(file, line, '\0');
			temp << line;
			file.close();
			temp.close();
			remove(notificationpath);
			rename("Temp", notificationpath);
			return true;
		}
		else
		{
			getline(file, line, '*');
			file.ignore(100, '\n');
			temp << line << "******************************************" << endl;
		}
	}
	temp << id << endl << 1 << endl << "1 - " << note << endl << "******************************************";
	file.close();
	temp.close();
	remove(notificationpath);
	rename("Temp", notificationpath);
	return true;
}
vector<string> Notification::read_Notification(int id)

{
	ifstream file;
	file.open(notificationpath, ios::in);
	int file_id, not;
	string line;
	vector<string> linevec;
	if (!file.is_open())
	{
		throw"Notification file not found";
	}
	else
	{
		while (file >> file_id)
		{
			if (file_id == id)
			{
				file.ignore();
				file >> not;
				for (int i = 0; i < not; i++)
				{
					getline(file, line);
					linevec.push_back(line);
				}
				file.close();
				return linevec;
			}
			else
			{
				file.ignore(2000, '*');
				file.ignore(100, '\n');
			}
		}
		file.close();
		throw "You Have No Notifications";
	}
}
bool Notification::delete_Notification(int id)
{
	ifstream file;
	ofstream temp;
	int file_id;
	string line;
	file.open(notificationpath, ios::in);
	if (!file.is_open())
	{
		temp.open(notificationpath, ios::out);
		temp.close();
		file.open(notificationpath, ios::in);
	}
	temp.open("Temp", ios::out);
	while (file >> file_id)
	{
		if (file_id == id)
		{
			file.ignore(2000, '*');
			file.ignore(100, '\n');
			getline(file, line, '\0');
			temp << line;
			file.close();
			temp.close();
			remove(notificationpath);
			rename("Temp", notificationpath);
			return true;
		}
		else
		{
			getline(file, line, '*');
			file.ignore(100, '\n');
			temp << line << "******************************************" << endl;
		}
	}
	file.close();
	temp.close();
	remove("Temp");
	throw "user not found";
	return false;
}