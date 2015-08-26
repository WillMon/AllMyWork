#include <iostream>
using namespace std;
int main()
{
	//set max number of names to enter
	const int numNames = 2;
	//setup the 2d array that will store names
	char names[numNames][100];


	//loop through input and populate the array
	for (int i = 0; i < numNames; i++)
	{
		char name[100];
		cout << "Enter a name \n";
		//this will get all of the characters up to the carriage return key.
		//it will get the space which if you enter both a first and last name
		//will be needed
		cin.getline(name, 100);
		for (int j = 0; j < 100; j++)
		{

			names[i][j] = name[j];
		}
	}

	//loop through the input and print
	for (int i = 0; i < 2; i++)
	{
		cout << "Name: " << i << ": ";
		for (int j = strlen(names[i]); j >= 0; j--)
		{
			cout << names[i][j];
		}
		cout << endl;
	}

	system("pause");
	return 0;

}