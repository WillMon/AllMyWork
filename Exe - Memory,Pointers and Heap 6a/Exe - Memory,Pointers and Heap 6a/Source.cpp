#include <iostream>
using namespace std;
void RevString(char*);
int main()
{
	const unsigned int iTen = 100;
	char cDeArray[iTen];
	cin >> cDeArray;
	cin.getline(cDeArray, iTen);
	char* cReverse = &cDeArray[iTen];
	RevString(cReverse);
	system("pause");
}
void RevString(char* cArray)
{	
	
	const unsigned int iAlltogether = strlen(cArray);
	
	for (int j = 0, i = iAlltogether; i >= 0; --i,++j)
	{
		char cBent = cArray[i];
		cArray[i] = cArray[j];
		cArray[i] = cBent;
	}
}
