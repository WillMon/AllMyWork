#include <iostream>
#include <stdio.h>
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
			cout << ((char)1) << endl;
		}
		else
			cout << chr[i] << endl;
		
	}
}
void ASCII2(char **ray)
{	
	int inarray[3][8];
	for (int i = 0; i < 3; i++)
		for (int j = 0; j <= 7; j++)
		{
			if (((int)ray[i][j + 1]) == 0)
				j++;
			inarray[i][j] = ((int)ray[i][j]);

			cout << inarray[i][j] << endl;
		}
	//system("pause");
	/*#include <stdio.h>

void testfunc(char **ray) {		
}

int main () {
	char *ray][]
	testfunc((char**)ray);
}*/
}
int main()
{	
	char *ray[3][8]= { "William","Andres","Montero" };
	char ChrArray[12] = { "Hello world" };
	ASCII1a(ChrArray, 11);
	ASCII1b(ChrArray, 11);
	system("pause");
	ASCII2((char**)ray);
	system("pause");
	return 0;
	//int intager;
	//print((char)intager)
}