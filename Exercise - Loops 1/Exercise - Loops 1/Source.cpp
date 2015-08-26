#include <iostream>
int main()
{	
	//int num[100];
	for (int i = 100; i >=0; i--)
	{
		//num[i] = i;
		std::cout << i <<", ";
		
	}
	system("pause");
	
	for (int i = (100 - 1); i >=0; i--)
	{
		std::cout << i << ", ";
	}
	system("pause");

	for (int i = 100; i > 0; i--)
	{
		std::cout << i << ", ";
	}
	system("pause");
	for (int i = (100 - 1); i >0; i--)
	{
		std::cout << i << ", ";
	}
	system("pause");
	return 0;
}