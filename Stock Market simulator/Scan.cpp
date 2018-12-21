#include "Scan.h"
string Scan_name()
{
	char x;
	string name;
	while (true)
	{
		x = _getch();
		if ((x == '\r' || x == '\n') && name.length() >= 4)
		{
			cout << '\n';
			return name;
		}
		else if (((x <= 122 && x >= 95) || (x <= 90 && x >= 65) || x == ' ' || x == '-' || x == '.') && name.length() < 30)
		{
			if (name.length() == 0)
				x = toupper(x);
			cout << x;
			name.push_back(x);
		}
		else if ((x == '\b') && name.length() != 0)
		{
			cout << "\b \b";
			name.pop_back();
		}
		else
		{
			cout << '\a';
			cin.clear();
		}
	}
}
string Scan_Email()
{
	char x;
	string email;
	while (true)
	{
		x = _getch();
		if ((x == '\r' || x == '\n') && email.length() >= 9)
		{
			for (unsigned int i = 0; i < email.length(); i++)
				if (email.substr(i, 1) == "@")
				{
				cout << '\n';
				return email;
				}
			cout << '\a';
		}
		else if (((x <= 122 && x >= 95) || (x <= 90 && x >= 65) || (x <= 57 && x >= 48) || x == '-' || x == '@' || x == '.') && email.length() < 30)
		{
			cout << x;
			email.push_back(x);
		}
		else if ((x == '\b') && email.length() != 0)
		{
			cout << "\b \b";
			email.pop_back();
		}
		else
			cout << '\a';
	}
}
string Scan_Phone()
{
	char x;
	string phone;
	while (true)
	{
		x = _getch();
		if ((x == '\r' || x == '\n') && phone.length() >= 7)
		{
			cout << '\n';
			return phone;
		}
		else if (((x <= 57 && x >= 48) || x == '+') && phone.length() < 15)
		{
			cout << x;
			phone.push_back(x);
		}
		else if ((x == '\b') && phone.length() != 0)
		{
			cout << "\b \b";
			phone.pop_back();
		}
		else
			cout << '\a';
	}
}
string Scan_NID()
{
	char x;
	string NID;
	while (true)
	{
		x = _getch();
		if ((x == '\r' || x == '\n') && NID.length() == 14)
		{
			cout << '\n';
			return NID;
		}
		else if ((x <= 57 && x >= 48) && NID.length() < 14)
		{
			cout << x;
			NID.push_back(x);
		}
		else if ((x == '\b') && NID.length() != 0)
		{
			cout << "\b \b";
			NID.pop_back();
		}
		else
			cout << '\a';
	}
}
float Scan_Price()
{
	char x;
	int c = 0;
	string Price;
	while (true)
	{
		x = _getch();
		if ((x == '\r' || x == '\n') && Price.length() > 0)
		{
			cout << '\n';
			float P;
			stringstream ss;
			ss << Price;
			ss >> P;
			return P;
		}
		else if (((x <= 57 && x >= 48) || x == '.') && Price.length() < 15)
		{
			if (x == '.' && c == 1)
				cout << '\a';
			else if (x == '.' && c == 0)
			{
				c = 1;
				cout << x;
				Price.push_back(x);
			}
			else
			{
				cout << x;
				Price.push_back(x);
			}
		}
		else if ((x == '\b') && Price.length() != 0)
		{
			if (Price.at(Price.length() - 1) == '.')
			{
				c = 0;
				cout << "\b \b";
				Price.pop_back();
			}
			else
			{
				cout << "\b \b";
				Price.pop_back();
			}
		}
		else
			cout << '\a';
	}
}
int Scan_ID()
{
	char x;
	string ID;
	while (true)
	{
		x = _getch();
		if ((x == '\r' || x == '\n') && ID.length() == 7)
		{
			cout << '\n';
			stringstream ss;
			int d;
			ss << ID;
			ss >> d;
			return d;
		}
		else if ((x <= 57 && x >= 48) && ID.length() < 7)
		{
			cout << x;
			ID.push_back(x);
		}
		else if ((x == '\b') && ID.length() != 0)
		{
			cout << "\b \b";
			ID.pop_back();
		}
		else
			cout << '\a';
	}
}
string Scan_Password()
{
	int a = 0;
	char x;
	string Password;
	while (true)
	{

		x = _getch();
		if ((x == '\r' || x == '\n') && Password.length() >= 4)
		{
			cout << "\b*\n";
			return Password;
		}
		else if (((x <= 122 && x >= 95) || (x <= 90 && x >= 65) || (x <= 57 && x >= 48) || x == '-' || x == '.') && Password.length() < 30)
		{
			if (a == 0)
				cout << x;
			else
				cout << "\b*" << x;
			Password.push_back(x);
			a++;
		}
		else if ((x == '\b') && Password.length() != 0)
		{
			cout << "\b \b";
			Password.pop_back();
			a--;
		}
		else
			cout << '\a';
	}
}
string Scan_Stock()
{
	char x;
	string name;
	while (true)
	{
		x = _getch();
		if ((x == '\r' || x == '\n') && name.length() >= 3)
		{
			cout << '\n';
			return name;
		}
		else if (((x <= 122 && x >= 95) || (x <= 90 && x >= 65) || (x <= '9' && x >= '0') || x == '-' || x == '_'|| x == '.') && name.length() < 9)
		{
			x = toupper(x);
			cout << x;
			name.push_back(x);
		}
		else if ((x == '\b') && name.length() != 0)
		{
			cout << "\b \b";
			name.pop_back();
		}
		else
		{
			cout << '\a';
			cin.clear();
		}
	}
}