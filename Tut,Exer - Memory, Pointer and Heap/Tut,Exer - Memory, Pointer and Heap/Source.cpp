#include <iostream>
#include <string>
using namespace std;
void RevString(string*);
void RevString(string* sArray)
{
	int i = 0;
	// The Length of the String 
		
	while (sArray[i] != "/0") 
		i++;
		for (int j = i; j > 0; --j)
		{
			string* sTurd;
			string sBigturd = sArray[j];
			sTurd = &sBigturd;
			cout << *sTurd;
		}
	
}
int main()
{
	string  sString;
	string* cPcp = &sString;
	getline(cin,*cPcp);
	RevString(cPcp);
	system("pause");
	return 0;
}