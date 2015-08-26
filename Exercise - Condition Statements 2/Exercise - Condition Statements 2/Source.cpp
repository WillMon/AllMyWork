#include <iostream>
int main()
{		
	int num1, num2, num3, num4, num5, num6, num7, sum;
	std::cout << "Type in one number:";
	std::cin >> num1;
	std::cin.get();
	std::cout << "Type in your secand number:";
	std::cin >> num2;
	std::cin.get();
	// displaying the largest number 2#
	if (num1 < num2)
	{
		std::cout << "This is the highest number " << num2;
		std::cin.get();
	}
	else
	{
		std::cout << "This is the highest number " << num1;
		std::cin.get();
	}
	return 0;
}