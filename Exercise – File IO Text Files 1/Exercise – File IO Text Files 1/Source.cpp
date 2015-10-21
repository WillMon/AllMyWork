#include <iostream>
#include <fstream>
#include <string>
using namespace std;

ofstream MyLog;
void oWrite();
void oDisplay();
void oClear();
void UsersInput(string);
void ShowingDisplay();

void main()
{
	string sInput;
	bool bRunning = true;
	while (bRunning)
	{
		cout << "Want to display, write, clear, or exit the program: ";
		cin >> sInput;
		if (sInput == "exit")
			bRunning = false;
		UsersInput(sInput);
	}
}
void UsersInput(string sImplament)
{
	if (sImplament == "display")
		ShowingDisplay();
	else if (sImplament == "write")
		oWrite();	
	else if (sImplament == "exit")
		cout << endl;
	else if (sImplament == "clear")
	{
		MyLog.open("MyLog.txt", ios_base::out);
		MyLog.close();
	}
	else
		cout << "Type in One of the given chooses" << endl;
}
void ShowingDisplay()
{
	ifstream Display;
	string sFileLine;

	Display.open("MyLog.txt", ios_base::in);
	cin.ignore();
	while (!Display.eof())
	{
		getline(Display, sFileLine);
		cout << sFileLine << endl;
	}
	Display.close();
}
void oWrite()
{
	string sImport;
	cout << "Type: ";
	cin.ignore();
	getline(cin, sImport);
	MyLog.open("MyLog.txt",ios_base::app);
	MyLog << sImport << endl;
	if (MyLog.is_open())
		cout << "Changes have been added" << endl;
	MyLog.close();
}