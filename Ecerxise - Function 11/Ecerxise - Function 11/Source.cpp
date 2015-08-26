#include <iostream>
using namespace std;
void  VagConfusion(int num, int array_one[], int array_two[], int output_array[])
{
	for (int i = 0; i < num; i++)
	{
		output_array[i] = array_one[i] + array_two[i];
		cout << output_array[i] << endl;
	}
	system("pause");
}
int main()
{		
	int ArrayOne[7] = { 10, 15, 7, 4, 13, 19 ,8 };
	int ArrayTwo[7] = { 14, 76, 97, 33, 902, 781, 2002 };
	int OutputArray[7];
	VagConfusion(7, ArrayOne, ArrayTwo, OutputArray);

}