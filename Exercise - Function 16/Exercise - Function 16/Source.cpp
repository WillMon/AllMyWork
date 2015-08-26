#include <iostream>
using namespace std;
void LookAndSay(int array_input[], int num)
{	
	int  tot = 0;
	for (int i = 0; i < num; i++)
	{	
		int count = 0;
		if (array_input[i] == count)
			tot++;
		else if (array_input[i] != count)
		{
			count = array_input[i];
			tot = 1;
		}
		cout << tot << "," << count << endl;
	}
}
int main()
{
	int InputArray[19] = { 1,2,2,1,5,1,1,7,7,7,7,1,1,1,1,1,1,1,1 };
	LookAndSay(InputArray, 19);
	system("pause");
}