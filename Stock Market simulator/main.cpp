//#pragma once
//#include <iostream>
//#include <windows.h>
//#include <string>
//#include <iomanip>
//#include <conio.h>
//#include "person.h"
//#include "functions.h"
//#include "password.h"
//#include "Notification.h"
//#include "bank.h"
//#include <ctype.h>
//#include "portfilo.h"
//#include "trade.h"
//#include "stateofaccount.h"
//#include "buy.h"
//#include "sell.h"
//#include "client.h"
//#include "admin.h"
//#define z (char)178
//using namespace std;
//void credit()
//{
//	system("CLS");
//	cout << "\t\t\tStock Market Simulator Project FCIH\n\n\t\t\t Many Thanks To Dr.Ayman Ezzat \n\n\n\t\t Team Leader :   Tarek El-Shahawy\n\n\t\t members     :   Nader Alaa El-Din\n\t\t\t\t Ahmed Ali\n\t\t\t\t Eslam Therwat\n\t\t\t\t Ahmed El Saeed\n\t\t\t\t Mohamed Tarek\n\t\t\t\t Osama Mersal\n\n\n\n";
//	system("pause");
//	cin.ignore();
//}
//int main()
//{
//	int userid;
//	string password;
//	Person p;
//	Client c;
//	Admin adm;
//	Notification N;
//	Stateofaccount u;
//	Bank b;
//	Portfilo f;
//	Trade t;
//	Market y;
//	Sell s;
//	int num;
//	float cash;
//	string line, line2;
//	char choice;
//	///////////////////////////////////////////////////////////////////////////
//first:
//	system("CLS");
//	for (int i = 0; i < 80; i++)
//		cout << z;
//	cout << z << "                                                                              " << z;
//	cout << z << "                                                                              " << z;
//	cout << z << "                                                                              " << z;
//	cout << z << "                 Welcome in Stock Market Simulator Project                    " << z;
//	cout << z << "                                                                              " << z;
//	cout << z << "                                                                              " << z;
//	cout << z << "                                                                              " << z;
//	cout << z << "                                [C] credit                                    " << z;
//	cout << z << "                                                                              " << z;
//	cout << z << "                                                                              " << z;
//	cout << z << "                                                                              " << z;
//	cout << z << "                                                                              " << z;
//	cout << z << "                                1 - Login                                     " << z;
//	cout << z << "                                                                              " << z;
//	cout << z << "                                2 - Sign up                                   " << z;
//	cout << z << "                                                                              " << z;
//	cout << z << "                                3 - Exit                                      " << z;
//	cout << z << "                                                                              " << z;
//	cout << z << "                                                                              " << z;
//	cout << z << "                                                                              " << z;
//	cout << z << "                                                                              " << z;
//	cout << z << "                                                                              " << z;
//	for (int i = 0; i < 80; i++)
//		cout << z;
//	choice = _getch();
//	choice = tolower(choice);
//	switch (choice)
//	{
//	case '1':
//	{
//	login:
//		system("CLS");
//		cout << endl << endl << "                               ---login---      [0] to return\n";
//		cout << "                       User ID : ";
//		cin >> userid;
//		cin.ignore();
//		if (cin.fail())
//		{
//			cin.clear();
//			cin.ignore(1000, '\n');
//			goto login;
//		}
//		if (userid == 0)
//			goto first;
//		cout << "                       Password  : ";
//		try
//		{
//			password = getpassword();
//			p.search_person(userid);
//			if (p.getpass() != password)
//				throw"                       wrong password or ID";
//		}
//		catch (const char *error)
//		{
//			cout << endl << "                 \a!!ERROR!!" << endl << "                       " << error << endl;
//			if (cin.fail())
//			{
//				cin.clear();
//				cin.ignore(100, '\n');
//			}
//			Sleep(2000);
//			goto login;
//		}
//		break;
//	}
//		//////////////////////////////////////////////////////////////////////////////////////
//	case '2':
//	{
//	registeration:
//		system("CLS");
//		cout << endl << endl << "                               ---sign up---      [0] to return\n";
//		cout << "                       Full Name : ";
//		getline(cin, line);
//		if (line == "0")
//		{
//			goto first;
//		}
//		p.setname(line);
//		cout << "                           Email : ";
//		getline(cin, line);
//		p.setemail(line);
//	pas:
//		cout << "                        Password : ";
//		line = getpassword();
//		cout << endl << "               Re Enter Password : ";
//		line2 = getpassword();
//		if (line == line2)
//			p.setpass(line);
//		else
//		{
//			cout << endl << "\a               Not Match" << endl;
//			Sleep(2000);
//			goto pas;
//		}
//	gender:
//		cout << endl << "                          gender :  [1] Male   [2] Female";
//		num = _getch();
//		if (num == '1')
//			p.setgender("male");
//		else if (num == '2')
//			p.setgender("female");
//		else
//		{
//			cout << endl << "\aWrong input" << endl;
//			if (cin.fail())
//			{
//				cin.clear();
//				cin.ignore(100, '\n');
//			}
//			Sleep(2000);
//			goto gender;
//		}
//		cout << endl << "                     National ID : ";
//		getline(cin, line);
//		p.setNID(line);
//		cout << "                    Bank Company : ";
//		getline(cin, line);
//		b.setbank_name(line);
//		cout << "                   Mobile Number : ";
//		getline(cin, line);
//		p.setphone(line);
//		p.settype("client");
//		/////////////////////////////////////////////////////////////////
//		system("CLS");
//		system("CLS");
//		for (int i = 0; i < 80; i++)
//			cout << z;
//		cout << z << "                                                                              " << z;
//		cout << z << "    Name : " << left << setw(28) << p.getname() << "  Mobile : " << setw(28) << p.getphone() << z;;
//		cout << z << "                                                                              " << z;
//		cout << z << "    Gender : " << setw(6) << p.getgender() << "                       National ID : " << setw(22) << p.getNID() << z;
//		cout << z << "                                                                              " << z;
//		cout << z << "    Bank Company : " << setw(22) << b.getbank_name() << "TYPE : " << setw(7) << p.gettype() << "                       " << z;
//		cout << z << "                                                                              " << z;
//		cout << z << "    Email : " << setw(29) << p.getemail() << "Password : " << setw(26) << p.getpass() << z;
//		cout << z << "                                                                              " << z;
//		for (int i = 0; i < 80; i++)
//			cout << z;
//	confirm:
//		cout << "                  1 - Confirm            2 - Decline                           " << endl;
//		choice = _getch();
//		choice = tolower(choice);
//		if (choice == '2')
//			goto registeration;
//		else if (choice == '1')
//		{
//			p.create_person();
//			p.save_person();
//			b.save_bank(p.id);
//			cout << endl << "Welcome !! " << p.getname() << endl << "your ID = ( " << p.id << " ) please Save it :D ";
//			system("pause");
//		}
//		else
//		{
//			cout << endl << "\awrong input";
//			if (cin.fail())
//			{
//				cin.clear();
//				cin.ignore(100, '\n');
//			}
//			goto confirm;
//		}
//		break;
//	}
//	case '3':
//		return 0;
//	case 'c':
//		credit();
//	default:
//		cout << "\a Wrong input";
//		goto first;
//	}
//	if (p.gettype() == "client")
//	{
//	client_home:
//		system("CLS");
//		cout << " _____________________________________________________________________________" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|                 Welcome ";
//		if (p.getgender() == "male"){ cout << "MR. "; }
//		else{ cout << "MISS. "; }
//		cout << left << setw(48) << p.getname() << "|" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|     [L]  logout      [H]  Home      [T]  trade screen       [C] credit      |" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|                       1 - Notification[ " << setw(2) << N.Notification_Number(p.id) << "]                                 |" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|                       2 - Edit Your profile                                 |" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|                       3 - State of Account                                  |" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|                       4 - Portfilo                                          |" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|                       5 - Broker request                                    |" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|                       6 - Trade                                             |" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|                       7 - Bank Management                                   |" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|_____________________________________________________________________________|" << endl;
//		choice = _getch();
//		choice = tolower(choice);
//		switch (choice)
//		{
//		case '1':
//			try
//			{
//				system("CLS");
//				vector<string> mynote;
//				mynote = N.read_Notification(p.id);
//				cout << endl << endl;
//				for (unsigned int i = 0; i < mynote.size(); i++)
//					cout << mynote[i] << endl;
//				N.delete_Notification(p.id);
//			}
//			catch (const char* error)
//			{
//				cout << endl << "!!ERROR!!" << endl << error << endl;
//			}
//			system("pause");
//			break;
//			/********************************************************************************/
//		case '2':
//		Edit :
//			b.load_bank(p.id);
//			 system("CLS");
//			 for (int i = 0; i < 80; i++)
//				 cout << z;
//			 cout << z << "                                                                              " << z;
//			 cout << z << "    Name : " << left << setw(28) << p.getname() << "  Mobile : " << setw(28) << p.getphone() << z;;
//			 cout << z << "                                                                              " << z;
//			 cout << z << "    Gender : " << setw(6) << p.getgender() << "                      National ID : " << setw(23) << p.getNID() << z;
//			 cout << z << "                                                                              " << z;
//			 cout << z << "    Bank Company : " << setw(22) << b.getbank_name() << "TYPE : " << setw(7) << p.gettype() << "                       " << z;
//			 cout << z << "                                                                              " << z;
//			 cout << z << "                        Email : " << setw(30) << p.getemail() <<"                "<< z;
//			 cout << z << "                                                                              " << z;
//			 for (int i = 0; i < 80; i++)
//				 cout << z;
//			 cout << " Edit   1 - Name               2 - Email                   3 - Password        " << endl << endl;
//			 cout << "        4 - National ID        5 - Bank Company            6 - Mobile          " << endl << endl;
//			 choice = _getch();
//			 choice = tolower(choice);
//			 switch (choice)
//			 {
//			 case '1':
//				 cout << "                 Enter your New Full Name : ";
//				 getline(cin, line);
//				 p.setname(line);
//				 break;
//				 /*--------------------------------------------------------*/
//			 case  '2':
//				 cout << "                 Enter your New Email : ";
//				 getline(cin, line);
//				 p.setemail(line);
//				 break;
//				 /*--------------------------------------------------------*/
//			 case '3':
//			 pass :
//				 try
//			 {
//				 cout << "                  Enter your Old Password : ";
//				 line = getpassword();
//				 if (line != p.getpass())
//				 {
//					 cout << "\n\a                 Wrong Password\n";
//					 goto pass;
//				 }
//			 rpas:
//				 cout << endl << "                  Enter your New Password : ";
//				 line = getpassword();
//				 cout << endl << "               Re Enter your New Password : ";
//				 line2 = getpassword();
//				 if (line == line2)
//					 p.setpass(line);
//				 else
//				 {
//					 cout << endl << "\a               Not Match" << endl;
//					 Sleep(2000);
//					 goto rpas;
//				 }
//			 }
//				  catch (const char *error)
//				  {
//					  cout << "!! Error !!\n" << error;
//				  }
//				  break;
//				  /*--------------------------------------------------------*/
//			 case '4':
//				 cout << endl << "            Enter your New National ID : ";
//				 getline(cin, line);
//				 p.setNID(line);
//				 break;
//				 /*--------------------------------------------------------*/
//			 case '5':
//				 cout << "                Enter your New Bank Company : ";
//				 getline(cin, line);
//				 b.setbank_name(line);
//				 b.save_bank(p.id);
//				 break;
//				 /*--------------------------------------------------------*/
//			 case '6':
//				 cout << "              Enter your New Mobile Number : ";
//				 getline(cin, line);
//				 p.setphone(line);
//				 p.settype("Client");
//				 break;
//				 /*--------------------------------------------------------*/
//			 case 'h':
//				 goto client_home;
//				 break;
//			 case 'l':
//				 goto first;
//				 break;
//			 case 't':
//				 system("START Stocks_Screen");
//				 break;
//			 case 'c':
//				 credit();
//				 break;
//				 /*--------------------------------------------------------*/
//			 default:
//				 cout << "\a                   wrong Input";
//				 system("pause");
//				 break;
//			 }
//			 p.update_person(p.id);
//			 goto Edit;
//			 /********************************************************************************/
//		case '3':
//			system("CLS");
//			try
//			{
//				vector<string> state = u.read_state(p.id);
//				for (unsigned int i = 0; i < state.size(); i++)
//					cout << state[i] << endl;
//			}
//			catch (const char* error)
//			{
//				cout << error;
//			}
//			system("pause");
//			break;
//			/********************************************************************************/
//		case '4':
//			system("CLS");
//			try
//			{
//				vector<Portfilo> portfil = f.search_portfilo(p.id);
//
//				cout << left << setw(15) << "Stock Name" << setw(15) << "Quantity" << setw(15) << "price" << setw(15) << "total cost" << endl;
//				cout << "------------------------------------------------------------------" << endl;
//				for (unsigned int i = 0; i < portfil.size(); i++)
//					cout << left << "   " << setw(15) << portfil[i].getstock_name() << setw(15) << portfil[i].getquantity() << setw(15) << portfil[i].getstock_price() << setw(15) << portfil[i].stock_total_cost() << endl;
//			}
//			catch (const char* error)
//			{
//				cout << error;
//			}
//			system("pause");
//			break;
//			/********************************************************************************/
//		case '5':
//			system("CLS");
//			try
//			{
//				vector<Trade> offer = c.showoallffers(p.id);
//
//				for (unsigned int i = 0; i < offer.size(); i++)
//					cout << left << offer[i].method << " " << offer[i].quantity << " of " << offer[i].stock_id << " price " << offer[i].price << endl;
//			}
//			catch (const char* error)
//			{
//				cout << error;
//			}
//			system("pause");
//
//			break;
//			/********************************************************************************/
//		case '6':
//		trd :
//			if (cin.fail())
//			{
//			cin.clear();
//			cin.ignore(1000, '\n');
//			}
//			system("CLS");
//			cout << " _____________________________________________________________________________" << endl;
//			cout << "|                                                                             |" << endl;
//			cout << "|                                                                             |" << endl;
//			cout << "|                                                                             |" << endl;
//			cout << "|                                                                             |" << endl;
//			cout << "|                 Welcome ";
//			if (p.getgender() == "male"){ cout << "MR. "; }
//			else{ cout << "MISS. "; }
//			cout << left << setw(48) << p.getname() << "|" << endl;
//			cout << "|                                                                             |" << endl;
//			cout << "|     [L]  logout      [H]  Home      [T]  trade screen       [C] credit      |" << endl;
//			cout << "|                                                                             |" << endl;
//			cout << "|                                                                             |" << endl;
//			cout << "|                                                                             |" << endl;
//			cout << "|                                                                             |" << endl;
//			cout << "|                                                                             |" << endl;
//			cout << "|                                1 - buy                                      |" << endl;
//			cout << "|                                                                             |" << endl;
//			cout << "|                                2 - Sell                                     |" << endl;
//			cout << "|                                                                             |" << endl;
//			cout << "|                                                                             |" << endl;
//			cout << "|                                                                             |" << endl;
//			cout << "|                                                                             |" << endl;
//			cout << "|                                                                             |" << endl;
//			cout << "|                                                                             |" << endl;
//			cout << "|                                                                             |" << endl;
//			cout << "|_____________________________________________________________________________|" << endl;
//			choice = _getch();
//			choice = tolower(choice);
//			switch (choice)
//			{
//			case '1':
//				system("CLS");
//				try
//				{
//					cout << endl << endl << "                               ---buy---      [0] to return\n";
//					cout << endl << "                  Commission = " << y.getCommission() << "     Broker Commission = " << y.getbroker_Commission() << endl << endl;
//					cout << endl << "                Enter Stock ID : ";
//					cin >> y.stock_id;
//					y.stock_id = StringToUpper(y.stock_id);
//					if (y.stock_id == "0")
//						goto trd;
//					cout << endl << "                Enter Stock Price : ";
//					cin >> y.price;
//					cout << endl << "                Enter Stock Quantity : ";
//					cin >> y.quantity;
//					y.id = p.id;
//					if (cin.fail())
//					{
//						cin.clear();
//						cin.ignore(1000, '\n');
//						goto trd;
//					}
//					y.buying();
//				}
//				catch (const char* error)
//				{
//					cout << endl << "\a!!ERROR!!" << endl << error;
//					system("pause");
//					goto trd;
//				}
//				break;
//			case '2':
//				system("CLS");
//				try
//				{
//					cout << endl << endl << "                               ---Sell---      [0] to return\n";
//					cout << endl << "                  Commission = " << t.getCommission() << "     Broker Commission = " << t.getbroker_Commission() << endl << endl;
//					cout << endl << "                Enter Stock ID : ";
//					cin >> t.stock_id;
//					y.stock_id = StringToUpper(y.stock_id);
//					if (t.stock_id == "0")
//						goto trd;
//					cout << endl << "                Enter Stock Price : ";
//					cin >> t.price;
//					cout << endl << "                Enter Stock Quantity : ";
//					cin >> t.quantity;
//					if (cin.fail())
//					{
//						cin.clear();
//						cin.ignore(1000, '\n');
//						goto trd;
//					}
//					t.id = p.id;
//					s.selling();
//				}
//				catch (const char* error)
//				{
//					cout << endl << "\a!!ERROR!!" << endl << error;
//					system("pause");
//					goto trd;
//				}
//				break;
//			case 'h':
//				goto client_home;
//				break;
//			case 'l':
//				goto first;
//				break;
//			case 't':
//				system("START Stocks_Screen");
//				break;
//			case 'c':
//				credit();
//				break;
//			default:
//				cout << "\a                   wrong Input";
//				system("pause");
//				break;
//			}
//			goto trd;
//			break;
//			/********************************************************************************/
//		case '7':
//			b.load_bank(p.id);
//		bnk:
//			if (cin.fail())
//			{
//				cin.clear();
//				cin.ignore(1000, '\n');
//			}
//			system("CLS");
//			cout << " _____________________________________________________________________________" << endl;
//			cout << "|                                                                             |" << endl;
//			cout << "|                                                                             |" << endl;
//			cout << "|                           " << setw(50) << left << b.getbank_name() << "|" << endl;
//			cout << "|                                                                             |" << endl;
//			cout << "|                 Welcome ";
//			if (p.getgender() == "male"){ cout << "MR. "; }
//			else{ cout << "MISS. "; }
//			cout << left << setw(48) << p.getname() << "|" << endl;
//			cout << "|                                                                             |" << endl;
//			cout << "|     [L]  logout      [H]  Home      [T]  trade screen       [C] credit      |" << endl;
//			cout << "|                                                                             |" << endl;
//			cout << "|                                                                             |" << endl;
//			cout << "|                 your balance = " << left << fixed << setprecision(2) << setw(10) << b.getbalance() << "                                   |" << endl;
//			cout << "|                                                                             |" << endl;
//			cout << "|                                                                             |" << endl;
//			cout << "|                                1 - Deposit                                  |" << endl;
//			cout << "|                                                                             |" << endl;
//			cout << "|                                2 - Withdraw                                 |" << endl;
//			cout << "|                                                                             |" << endl;
//			cout << "|                                                                             |" << endl;
//			cout << "|                                                                             |" << endl;
//			cout << "|                                                                             |" << endl;
//			cout << "|                                                                             |" << endl;
//			cout << "|                                                                             |" << endl;
//			cout << "|                                                                             |" << endl;
//			cout << "|_____________________________________________________________________________|" << endl;
//			choice = _getch();
//			choice = tolower(choice);
//			switch (choice)
//			{
//			case '1':
//				system("CLS");
//				cout << endl << endl << "                             ---Deposit---      [0] to return\n";
//				cout << endl << "                      Enter Cash : ";
//				cin >> cash;
//				if (cash == 0)
//					goto bnk;
//				try
//				{
//					if (cash < 0)
//						throw "\ainvalid Number";
//					b.deposit(cash);
//					b.save_bank(p.id);
//				}
//				catch (const char* error)
//				{
//					cout << endl << "\a!!ERROR!!" << endl << error;
//					system("pause");
//					goto bnk;
//				}
//				break;
//			case '2':
//				system("CLS");
//				cout << endl << endl << "                             ---Withdraw---      [0] to return\n";
//				cout << endl << "                      Enter Cash : ";
//				cin >> cash;
//				try
//				{
//					if (cash < 0)
//						throw "\ainvalid Number";
//					if (cin.fail())
//					{
//						cin.clear();
//						cin.ignore(1000, '\n');
//					}
//					b.withdrow(cash);
//					b.save_bank(p.id);
//				}
//				catch (const char* error)
//				{
//					cout << endl << "\a!!ERROR!!" << endl << error;
//					system("pause");
//					goto bnk;
//				}
//				break;
//			case 'h':
//				goto client_home;
//				break;
//			case 'l':
//				goto first;
//				break;
//			case 't':
//				system("START Stocks_Screen");
//				break;
//			case 'c':
//				credit();
//				break;
//			default:
//				cout << "\a                   wrong Input";
//				system("pause");
//				break;
//			}
//			goto bnk;
//			/********************************************************************************/
//		case 'h':
//			goto client_home;
//			break;
//		case 'l':
//			goto first;
//			break;
//		case 't':
//			system("START Stocks_Screen");
//			break;
//		case 'c':
//			credit();
//			break;
//			/********************************************************************************/
//		default:
//			cout << "\a                   wrong Input";
//			system("pause");
//			break;
//		}
//		goto client_home;
//	}
//	/*************************************************************************************************************************************************/
//	else if (p.gettype() == "broker")
//	{
//	broker_home:
//		system("CLS");
//		cout << " _____________________________________________________________________________" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|                 Welcome Broker";
//		if (p.getgender() == "male"){ cout << "MR. "; }
//		else{ cout << "MISS. "; }
//		cout << left << setw(48) << p.getname() << "|" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|     [L]  logout      [H]  Home      [T]  trade screen       [C] credit      |" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|                       1 - Notification[ " << setw(2) << N.Notification_Number(p.id) << "]                                 |" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|                       2 - make offer                                        |" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|                       3 - show all clients                                  |" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|_____________________________________________________________________________|" << endl;
//		choice = _getch();
//		choice = tolower(choice);
//		switch (choice)
//		{
//		case '1':
//			try
//			{
//				system("CLS");
//				vector<string> mynote;
//				mynote = N.read_Notification(p.id);
//				cout << endl << endl;
//				for (unsigned int i = 0; i < mynote.size(); i++)
//					cout << mynote[i] << endl;
//				N.delete_Notification(p.id);
//			}
//			catch (const char* error)
//			{
//				cout << endl << "!!ERROR!!" << endl << error << endl;
//			}
//			system("pause");
//			break;
//			/********************************************************************************/
//
//		case '2':
//		btrd :
//			system("CLS");
//			 cout << " _____________________________________________________________________________" << endl;
//			 cout << "|                                                                             |" << endl;
//			 cout << "|                                                                             |" << endl;
//			 cout << "|                                                                             |" << endl;
//			 cout << "|                                                                             |" << endl;
//			 cout << "|                 Welcome ";
//			 if (p.getgender() == "male"){ cout << "MR. "; }
//			 else{ cout << "MISS. "; }
//			 cout << left << setw(48) << p.getname() << "|" << endl;
//			 cout << "|                                                                             |" << endl;
//			 cout << "|     [L]  logout      [H]  Home      [T]  trade screen       [C] credit      |" << endl;
//			 cout << "|                                                                             |" << endl;
//			 cout << "|                                                                             |" << endl;
//			 cout << "|                                                                             |" << endl;
//			 cout << "|                                                                             |" << endl;
//			 cout << "|                                                                             |" << endl;
//			 cout << "|                                1 - buy                                      |" << endl;
//			 cout << "|                                                                             |" << endl;
//			 cout << "|                                2 - Sell                                     |" << endl;
//			 cout << "|                                                                             |" << endl;
//			 cout << "|                                                                             |" << endl;
//			 cout << "|                                                                             |" << endl;
//			 cout << "|                                                                             |" << endl;
//			 cout << "|                                                                             |" << endl;
//			 cout << "|                                                                             |" << endl;
//			 cout << "|                                                                             |" << endl;
//			 cout << "|_____________________________________________________________________________|" << endl;
//			 choice = _getch();
//			 choice = tolower(choice);
//			 switch (choice)
//			 {
//			 case '1':
//				 system("CLS");
//				 try
//				 {
//					 cout << endl << endl << "                               ---buy---      [0] to return\n";
//					 cout << endl << "                  Commission = " << y.getCommission() << "     Broker Commission = " << y.getbroker_Commission() << endl << endl;
//					 cout << endl << "                Enter Stock ID : ";
//					 cin >> y.stock_id;
//					 y.stock_id = StringToUpper(y.stock_id);
//					 if (y.stock_id == "0")
//						 goto trd;
//					 cout << endl << "                Enter Stock Price : ";
//					 cin >> y.price;
//					 cout << endl << "                Enter Stock Quantity : ";
//					 cin >> y.quantity;
//					 y.id = p.id;
//					 if (cin.fail())
//					 {
//						 cin.clear();
//						 cin.ignore(1000, '\n');
//						 goto trd;
//					 }
//					 y.offer_buy();
//				 }
//				 catch (const char* error)
//				 {
//					 cout << endl << "\a!!ERROR!!" << endl << error;
//					 system("pause");
//					 goto btrd;
//				 }
//				 break;
//			 case '2':
//				 system("CLS");
//				 try
//				 {
//					 cout << endl << endl << "                               ---Sell---      [0] to return\n";
//					 cout << endl << "                  Commission = " << t.getCommission() << "     Broker Commission = " << t.getbroker_Commission() << endl << endl;
//					 cout << endl << "                Enter Stock ID : ";
//					 cin >> t.stock_id;
//					 y.stock_id = StringToUpper(y.stock_id);
//					 if (t.stock_id == "0")
//						 goto trd;
//					 cout << endl << "                Enter Stock Price : ";
//					 cin >> t.price;
//					 cout << endl << "                Enter Stock Quantity : ";
//					 cin >> t.quantity;
//					 if (cin.fail())
//					 {
//						 cin.clear();
//						 cin.ignore(1000, '\n');
//						 goto trd;
//					 }
//					 t.id = p.id;
//					 s.offer_sell();
//				 }
//				 catch (const char* error)
//				 {
//					 cout << endl << "\a!!ERROR!!" << endl << error;
//					 system("pause");
//					 goto trd;
//				 }
//				 break;
//			 case 'h':
//				 goto client_home;
//				 break;
//			 case 'l':
//				 goto first;
//				 break;
//			 case 't':
//				 system("START Stocks_Screen");
//				 break;
//			 case 'c':
//				 credit();
//				 break;
//			 default:
//				 cout << "\a                   wrong Input";
//				 system("pause");
//				 break;
//			 }
//			 goto btrd;
//			 break;
//			 /********************************************************************************/
//		case '3':
//			break;
//			/********************************************************************************/
//		case 'h':
//			goto broker_home;
//			break;
//		case 'l':
//			goto first;
//			break;
//		case 't':
//			system("START Stocks_Screen");
//			break;
//		case 'c':
//			credit();
//			break;
//			/********************************************************************************/
//		default:
//			cout << "\a                   wrong Input";
//			system("pause");
//			break;
//		}
//		goto broker_home;
//	}
//	else if (p.gettype() == "admin")
//	{
//	admin_home:
//		system("CLS");
//		cout << " _____________________________________________________________________________" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|                 Welcome Admin";
//		if (p.getgender() == "male"){ cout << "MR. "; }
//		else{ cout << "MISS. "; }
//		cout << left << setw(48) << p.getname() << "|" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|     [L]  logout      [H]  Home      [T]  trade screen       [C] credit      |" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|                       1 - Notification[ " << setw(2) << N.Notification_Number(p.id) << "]                                 |" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|                       2 - update Account                                    |" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|                       3 - Delete Account                                    |" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|                                                                             |" << endl;
//		cout << "|_____________________________________________________________________________|" << endl;
//		choice = _getch();
//		choice = tolower(choice);
//		switch (choice)
//		{
//		case '1':
//			try
//			{
//				system("CLS");
//				vector<string> mynote;
//				mynote = N.read_Notification(p.id);
//				cout << endl << endl;
//				for (unsigned int i = 0; i < mynote.size(); i++)
//					cout << mynote[i] << endl;
//				N.delete_Notification(p.id);
//			}
//			catch (const char* error)
//			{
//				cout << endl << "!!ERROR!!" << endl << error << endl;
//			}
//			system("pause");
//			break;
//			/********************************************************************************/
//
//		case '2':
//		{
//			int a_id, type;
//			string n_name, n_id, n_type, n_gender, n_nid, n_mail, n_pass, n_phone;
//			vector<Admin> ad = adm.displayAll();
//			system("CLS");
//			for (unsigned int i = 0; i < ad.size(); i++)
//			{
//				cout << "Name   : " << left << setw(30) << ad[i].getname();
//				cout << "Type : " << setw(37) << ad[i].gettype() << endl;
//				cout << endl;
//				cout << "Gender : " << setw(30) << ad[i].getgender();
//				cout << "NID  : " << setw(41) << ad[i].getNID() << endl;
//				cout << endl;
//				cout << "Phone: " << setw(32) << ad[i].getphone();
//				cout << "Password : " << setw(27) << ad[i].getpass() << endl;
//				cout << endl << endl;
//				cout << "E-mail : " << setw(30) << ad[i].getemail() << "ID : " << ad[i].id << endl;
//
//				cout << "--------------------------------------------------------" << endl;
//			}
//			cout << "Enter ID : ";
//			cin >> a_id;
//			if (a_id == 0)
//				goto admin_home;
//			adm.search_person(a_id);
//			system("CLS");
//			cout << "Name   : " << left << setw(30) << adm.getname();
//			cout << "Type : " << setw(37) << adm.gettype() << endl;
//			cout << endl;
//			cout << "Gender : " << setw(30) << adm.getgender();
//			cout << "NID  : " << setw(41) << adm.getNID() << endl;
//			cout << endl;
//			cout << "Password : " << setw(27) << adm.getpass() << endl;
//			cout << endl << endl;
//			cout << "E-mail : " << setw(30) << adm.getemail() << "ID : " << adm.id << endl;
//			cout << "------------------------------------------------------------" << endl;
//			cout << "Enter New Name : ";
//			getline(cin, n_name);
//			getline(cin, n_name);
//			adm.setname(n_name);
//			cout << "Enter New ID : ";
//			cin >> adm.id;
//		rep:
//			cout << "Enter New Gender : 1-Male 2-Female\n";
//			cin >> type;
//			switch (type)
//			{
//			case 1:
//				n_gender = "male";
//				adm.setgender(n_gender);
//				break;
//			case 2:
//				n_gender = "female";
//				adm.setgender(n_gender);
//				break;
//			default:
//				cout << "Error" << endl;
//				goto rep;
//			}
//			cout << "Enter New E-mail : ";
//			getline(cin, n_mail);
//			getline(cin, n_mail);
//			adm.setemail(n_mail);
//			cout << "Enter New Password : ";
//			getline(cin, n_pass);
//			adm.setpass(n_pass);
//			cout << "Enter New Phone : ";
//			getline(cin, n_phone);
//			adm.setphone(n_phone);
//			cout << "Enter New Type : ";
//			getline(cin, n_type);
//			adm.settype(n_type);
//			adm.update_client(a_id);
//			system("CLS");
//			cout << "New Data" << endl;
//			cout << "Name   : " << left << setw(30) << adm.getname();
//			cout << "Type : " << setw(37) << adm.gettype() << endl;
//			cout << endl;
//			cout << "Gender : " << setw(30) << adm.getgender();
//			cout << "NID  : " << setw(41) << adm.getNID() << endl;
//			cout << endl;
//			cout << "Password : " << setw(27) << adm.getpass() << endl;
//			cout << endl << endl;
//			cout << "E-mail : " << setw(30) << adm.getemail() << "ID : " << adm.id << endl;
//			adm.save_person();
//			break;
//		}
//		case '3':
//		{
//			system("CLS");
//			int a_id;
//			vector<Admin> ad = adm.displayAll();
//			system("CLS");
//			for (unsigned int i = 0; i < ad.size(); i++)
//			{
//				cout << "Name   : " << left << setw(30) << ad[i].getname();
//				cout << "Type : " << setw(37) << ad[i].gettype() << endl;
//				cout << endl;
//				cout << "Gender : " << setw(30) << ad[i].getgender();
//				cout << "NID  : " << setw(41) << ad[i].getNID() << endl;
//				cout << endl;
//				cout << "Phone: " << setw(32) << ad[i].getphone();
//				cout << "Password : " << setw(27) << ad[i].getpass() << endl;
//				cout << endl << endl;
//				cout << "E-mail : " << setw(30) << ad[i].getemail() << "ID : " << ad[i].id << endl;
//
//				cout << "---------------------------------------------------------------------" << endl;
//			}
//			cout << "Enter ID : ";
//			cin >> a_id;
//			if (a_id == 0)
//				goto admin_home;
//			adm.search_person(a_id);
//			system("CLS");
//			cout << "Name   : " << left << setw(30) << adm.getname();
//			cout << "Type : " << setw(37) << adm.gettype() << endl;
//			cout << endl;
//			cout << "Gender : " << setw(30) << adm.getgender();
//			cout << "NID  : " << setw(41) << adm.getNID() << endl;
//			cout << endl;
//			cout << "Phone: " << setw(32) << adm.getphone();
//			cout << "Password : " << setw(27) << adm.getpass() << endl;
//			cout << endl << endl;
//			cout << "E-mail : " << setw(30) << adm.getemail() << "ID : " << adm.id << endl << endl;
//			adm.delete_person(a_id);
//			break;
//		}
//			/********************************************************************************/
//		case 'h':
//			goto admin_home;
//			break;
//		case 'l':
//			goto first;
//			break;
//		case 't':
//			system("START Stocks_Screen");
//			break;
//		case 'c':
//			credit();
//			break;
//			/********************************************************************************/
//		default:
//			cout << "\a                   wrong Input";
//			system("pause");
//			break;
//		}
//		goto admin_home;
//	}
//}
#include <iostream>
#include <string>
#include <iomanip>
#include <Windows.h>
#include "person.h"
#include "bank.h"
#include "portfilo.h"
#include "Scan.h"
#include "client.h"
using namespace std;

void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void hidecursor()
{
	CONSOLE_CURSOR_INFO lpCursor;
	lpCursor.bVisible = false;
	lpCursor.dwSize = 20;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &lpCursor);
}
void showcursor()
{
	CONSOLE_CURSOR_INFO lpCursor;
	lpCursor.bVisible = true;
	lpCursor.dwSize = 5;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &lpCursor);
}
bool SetWindow(int Width, int Height)
{
	_COORD coord;
	coord.X = Width;
	coord.Y = Height;

	_SMALL_RECT Rect;
	Rect.Top = 0;
	Rect.Left = 0;
	Rect.Bottom = Height - 1;
	Rect.Right = Width - 1;

	// Get handle of the standard output 
	HANDLE Handle = GetStdHandle(STD_OUTPUT_HANDLE);
	if (Handle == NULL)
	{
		cout << "Failure in getting the handle\n" << GetLastError();
		return FALSE;
	}

	// Set screen buffer size to that specified in coord 
	if (!SetConsoleScreenBufferSize(Handle, coord))
	{
		cout << "Failure in setting buffer size\n" << GetLastError();
		return FALSE;
	}

	// Set the window size to that specified in Rect 
	if (!SetConsoleWindowInfo(Handle, TRUE, &Rect))
	{
		cout << "Failure in setting window size\n" << GetLastError();
		return FALSE;
	}

	return TRUE;
}
using namespace std;
int main()
{
	SetWindow(80, 40);
	char ch;
	bool check;
	int pointer;
	hidecursor();
	Person person;
	Portfilo portfilo;
	Bank bank;
Start:
	system("CLS");
	string menu[4] = { "          Log In             ", "          Registration       ", "          About Us           ", "          Exit               " };
	pointer = 0;
	check = true;
	while (check)
	{
		system("CLS");
		cout << "                                    Main Menu";
		gotoxy(25, 7);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		for (int i = 0; i < 4; i++)
		{
			if (i == pointer)
			{
				gotoxy(25, 7 + i * 2);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 78);
				cout << menu[i];
			}
			else
			{
				gotoxy(25, 7 + i * 2);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				cout << menu[i];
			}
		}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

		while (true)
		{
			if (GetAsyncKeyState(VK_UP) < 0)
			{
				if (--pointer == -1)
					pointer = 3;
				break;
			}
			else if (GetAsyncKeyState(VK_DOWN) < 0)
			{
				if (++pointer == 4)
					pointer = 0;
				break;
			}
			else if (GetAsyncKeyState(VK_RETURN) < 0)
			{
				cin.ignore();
				check = false;
				if (pointer == 3)
					exit(0);
				break;
			}
		}
		Sleep(100);
	}
	//------------------------------------------------------------------------------------------------
	int userid = NULL;
	string password;
	string x;
	switch (pointer)
	{
	case 0:
	{
		check = true;
		pointer = 0;
		while (check)
		{
			system("CLS");
			if (pointer == 0)
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 79);
			else
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			gotoxy(14, 7);
			cout << "          " << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187);
			gotoxy(14, 8);
			cout << "User ID   " << char(186);
			if (userid)
				cout << setw(31) << left << userid << char(186);
			else cout << "                               " << char(186);
			gotoxy(14, 9);
			cout << "          " << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188);
			if (pointer == 1)
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 79);
			else
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			gotoxy(14, 11);
			cout << "          " << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187);
			gotoxy(14, 12);
			cout << "Password  " << char(186);
			x.erase();
			for (unsigned int i = 0; i < password.size(); i++)
				x.push_back('*');
			cout << setw(31) << left << x << char(186) << endl;
			gotoxy(14, 13);
			cout << "          " << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188);
			gotoxy(18, 18);
			if (pointer == 2)
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 79);
			else
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << char(17) << "Go Back";
			gotoxy(50, 18);
			if (pointer == 3)
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 79);
			else
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << "Login" << char(16);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			while (true)
			{
				if (GetAsyncKeyState(VK_UP) < 0 || GetAsyncKeyState(VK_LEFT) < 0)
				{
					if (--pointer == -1)
						pointer = 3;
					break;
				}
				else if (GetAsyncKeyState(VK_DOWN) < 0 || GetAsyncKeyState(VK_RIGHT) < 0)
				{
					if (++pointer == 4)
						pointer = 0;
					break;
				}
				else if (GetAsyncKeyState(VK_RETURN) < 0)
				{
					cin.ignore();
					switch (pointer)
					{
					case 0:
						gotoxy(25, 8);
						cout << "                               ";
						gotoxy(25, 8);
						userid = Scan_ID();
						break;
					case 1:
						gotoxy(25, 12);
						cout << "                               ";
						gotoxy(25, 12);
						password = Scan_Password();
						break;
					case 2:
						goto Start;
						break;
					case 3:
						try{
							person = person.search_person(userid);
							if (password != person.getpass())
								throw "Wrong Password";
						}
						catch (...)
						{
							MessageBox(NULL, L"Error Wrong name or password", MB_OK, MB_ICONWARNING);
						}
					default:
						break;
					}
					break;
				}
			}
			Sleep(100);
		}
	}
	case 1:
	{
		string line;
		string repass;
		Client *reg = new Client;
		check = true;
		pointer = 0;
		while (check)
		{
			system("CLS");
			cout << "                                   Registration";
			if (pointer == 0)
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 79);
			else
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			gotoxy(14, 3);
			cout << "          " << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187);
			gotoxy(14, 4);
			cout << "Full Name " << char(186) << setw(31) << left << reg->getname() << char(186);
			gotoxy(14, 5);
			cout << "          " << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188);

			if (pointer == 1)
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 79);
			else
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			gotoxy(14, 7);
			cout << "          " << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187);
			gotoxy(14, 8);
			cout << "Email     " << char(186) << setw(31) << left << reg->getemail() << char(186);
			gotoxy(14, 9);
			cout << "          " << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188);

			if (pointer == 2)
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 79);
			else
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			gotoxy(14, 11);
			cout << "          " << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187);
			gotoxy(14, 12);
			cout << "Password  " << char(186);
			x.erase();
			for (unsigned int i = 0; i < reg->getpass().size(); i++)
				x.push_back('*');
			cout << setw(31) << left << x << char(186) << endl;
			gotoxy(14, 13);
			cout << "          " << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188);

			if (pointer == 3)
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 79);
			else
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			gotoxy(14, 15);
			cout << "          " << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187);
			gotoxy(14, 16);
			cout << "RePassword" << char(186);
			x.erase();
			for (unsigned int i = 0; i < repass.size(); i++)
				x.push_back('*');
			cout << setw(31) << left << x << char(186) << endl;
			gotoxy(14, 17);
			cout << "          " << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188);

			if (pointer == 4)
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 79);
			else
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			gotoxy(14, 19);
			cout << "          " << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187);
			gotoxy(14, 20);
			cout << "NID       " << char(186) << setw(31) << left << reg->getNID() << char(186);
			gotoxy(14, 21);
			cout << "          " << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188);

			if (pointer == 5)
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 79);
			else
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			gotoxy(14, 23);
			cout << "          " << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187);
			gotoxy(14, 24);
			cout << "Mobile    " << char(186) << setw(31) << left << reg->getphone() << char(186);
			gotoxy(14, 25);
			cout << "          " << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188);

			if (pointer == 6)
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 79);
			else
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			gotoxy(14, 27);
			cout << "          " << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187);
			gotoxy(14, 28);
			cout << "Gender    " << char(186) << setw(31) << left << reg->getgender() << char(186);
			gotoxy(14, 29);
			cout << "          " << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188);

			if (pointer == 7)
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 79);
			else
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			gotoxy(14, 31);
			cout << "          " << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187);
			gotoxy(14, 32);
			cout << "Bank Comp." << char(186) << setw(31) << left << bank.getbank_name() << char(186);
			gotoxy(14, 33);
			cout << "          " << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188);

			gotoxy(18, 37);
			if (pointer == 8)
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 79);
			else
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << char(17) << " Go Back";
			gotoxy(50, 37);
			if (pointer == 9)
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 79);
			else
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << "Register " << char(16);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			while (true)
			{
				if (GetAsyncKeyState(VK_UP) < 0 || GetAsyncKeyState(VK_LEFT) < 0)
				{
					if (--pointer == -1)
						pointer = 9;
					break;
				}
				else if (GetAsyncKeyState(VK_DOWN) < 0 || GetAsyncKeyState(VK_RIGHT) < 0)
				{
					if (++pointer == 10)
						pointer = 0;
					break;
				}
				else if (GetAsyncKeyState(VK_RETURN) < 0)
				{
					cin.ignore();
					switch (pointer)
					{
					case 0:
						gotoxy(25, 4);
						cout << "                               ";
						gotoxy(25, 4);
						line = Scan_name();
						reg->setname(line);
						break;
					case 1:
						gotoxy(25, 8);
						cout << "                               ";
						gotoxy(25, 8);
						line = Scan_Email();
						reg->setemail(line);
						break;
					case 2:
						gotoxy(25, 12);
						cout << "                               ";
						gotoxy(25, 12);
						line = Scan_Password();
						reg->setpass(line);
						break;
					case 3:
						gotoxy(25, 16);
						cout << "                               ";
						gotoxy(25, 16);
						repass = Scan_Password();
						break;
					case 4:
						gotoxy(25, 20);
						cout << "                               ";
						gotoxy(25, 20);
						line = Scan_NID();
						reg->setNID(line);
						break;
					case 5:
						gotoxy(25, 24);
						cout << "                               ";
						gotoxy(25, 24);
						line = Scan_Phone();
						reg->setphone(line);
						break;

					case 6:
					{
						gotoxy(25, 28);
						cout << "                               ";
						int p = 0;
						while (check)
						{
							gotoxy(25, 28);
							if (p == 0)
								SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 79);
							else
								SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
							cout << "    Male       ";
							if (p == 1)
								SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 79);
							else
								SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
							cout << "      Female   ";
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
							while (true)
							{
								if (GetAsyncKeyState(VK_RIGHT) < 0)
								{
									if (++p == 2)
										p = 0;
									break;
								}
								else if (GetAsyncKeyState(VK_LEFT) < 0)
								{
									if (--p == -1)
										p = 1;
									break;
								}
								else if (GetAsyncKeyState(VK_RETURN) < 0)
								{
									cin.ignore();
									switch (p)
									{
									case 0:
										reg->setgender("Male");
										check = false;
										break;
									case 1:
										reg->setgender("Female");
										check = false;
										break;
									}
									break;
								}
							}
							Sleep(100);
						}
						check = true;
						break;
					}
					case 7:
						gotoxy(25, 32);
						cout << "                               ";
						gotoxy(25, 32);
						line = Scan_name();
						bank.setbank_name(line);
						reg->bank = &bank;
						break;
					case 8:
						delete(reg);
						goto Start;
						break;
					case 9:
						if (reg->getemail() == "" || reg->getname() == "" || reg->getpass() == "" || reg->getNID() == "" || reg->getgender() == "" || reg->getphone() == "" || reg->bank->getbank_name() == "")
						{
							MessageBox(NULL, L"Please Fill all Fields", MB_OK, MB_ICONSTOP);
							break;
						}
						else if (repass != reg->getpass())
						{
							MessageBox(NULL, L"Password doesn't match", MB_OK, MB_ICONSTOP);
							break;
						}
						else
						{
							int p;
							system("CLS");
							gotoxy(30, 20);
							cout << "Do you Need Broker ?";
							while (check)
							{
								gotoxy(35, 25);
								if (p == 0)
									SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 79);
								else
									SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
								cout << "Yes";
								gotoxy(42, 25);
								if (p == 1)
									SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 79);
								else
									SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
								cout << "No";
								SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
								while (true)
								{
									if (GetAsyncKeyState(VK_LEFT) < 0)
									{
										if (--p == -1)
											p = 1;
										break;
									}
									if (GetAsyncKeyState(VK_RIGHT) < 0)
									{
										if (++p == 2)
											p = 0;
										break;
									}
									if (GetAsyncKeyState(VK_RETURN) < 0)
									{
										switch (p)
										{
										case 0:
											reg->settype("ClientB");
											check = false;
											break;
										case 1:
											reg->settype("Client");
											check = false;
											break;
										}
										break;
									}
								}
								Sleep(100);
							}
							system("CLS");
							reg->bank->id = reg->add_person(reg);
							reg->bank->add_Bank(reg->bank);
							gotoxy(30, 20);
							cout << "Your ID is" << reg->id << "Please save it";
							gotoxy(35, 25);
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 79);
							cout << "Continue " << char(16);
							_getch();
						}
						break;
					}
				}
			}
			Sleep(100);
		}

	}
	}
}