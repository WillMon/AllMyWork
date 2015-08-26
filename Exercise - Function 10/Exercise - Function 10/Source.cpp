#include <iostream>
using namespace std;
void MultiplyByIndex(int input_array[], int OutputArray[], int num)
{
	for (int i = 0; i < num; i++)
	{
		OutputArray[i] = input_array[i] * i;
		cout << OutputArray[i] << endl;
	}
	system("pause");


}
int main()
{
	int interger_array[7] = { 10, 15, 7, 4, 13, 19 ,8};
	int output_array[7];
	MultiplyByIndex(interger_array, output_array, 7);
}