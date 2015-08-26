#include <iostream>
using namespace std;
void  SelfAddition(int array_input[], int num, int mod)
{	
 
	for (int i = 0; i < mod; i++)
	{
		int count = 0;
		for (int j = 0; j < num; j++)
		{
			count = count + array_input[j];
			array_input[j] = count;
			cout << count << endl;
		}
		system("pause");
	}


}
int main()
{
	int sum_array[4] = { 3,2,4,7 };
	SelfAddition(sum_array, 4, 5);
}