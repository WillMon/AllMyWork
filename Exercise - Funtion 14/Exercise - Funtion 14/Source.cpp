
#include <iostream>
using namespace std;
int Split(int input_array[], int num, int output_one[], int output_two[])
{	
	int count = 0;
	for (int i = 0; i < num; i++)
	{
		if (input_array[i] > 0)
		{
			output_one[i] = input_array[i];
			count++;
		}

		else if (input_array[i] < 0)
			output_two[i] = input_array[i];
	}
	return count;
}
	int main()
	{
		int ArrayOutput[8] = { 1, -1, -3, 2, 1, -3, 1, -4};
		int OutputOne[8];
		int OutputTwo[8];
		int result = Split(ArrayOutput, 8, OutputOne, OutputTwo);
		cout << result << endl;
		system("pause");
	}
