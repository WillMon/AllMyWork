#include <iostream>
using namespace std;
void ASCII1a(char chr[], int num)
{
	for (int i = 0; i < num; i++)
	{
		cout << ((int)chr[i]) << endl;
	}
	system("pause");
}
void ASCII1b(char chr[], int num)
{
	for (int i = 0; i < num; i++)
	{
		if (((int)chr[i + 1]) == 0 || ((int)chr[i + 1]) == 32)
		{
			int in = 1;
			cout << ((char)in) << endl;
		}
		else
			cout << chr[i] << endl;
	}
}
void ASCII2(char name[][], int num1, int num2)
{
	for (int i = 0; i < num1; i++)

}
int main()
{	
	char Name[3][8]{ { "William" }, { "Andres" }, { "Andres" } };
	char ChrArray[12] = { "Hello world" };
	ASCII1a(ChrArray, 11);
	ASCII1b(ChrArray, 11);
	ASCII2(Name, 3, 8);
	system("pause");
	//int intager;
	//print((char)intager)
}