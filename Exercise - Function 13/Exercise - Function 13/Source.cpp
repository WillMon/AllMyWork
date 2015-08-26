#include <iostream>
using namespace std;
int  Search(int array_input[], int found, int num)
{	
	int count = -1;
	for (int i = 0; i < num; i++)
	{
		if (array_input[i] == found)
		{
			count = i;
			return count;
			system("pause");
		}
	}
	return count;

}
int main()
{
	int ArrayInput[7] = { 0, 15, 14, 12, 52, 95, 48 };
	int result = Search(ArrayInput, 48, 7);
	cout << result << endl;

	system("pause");
}