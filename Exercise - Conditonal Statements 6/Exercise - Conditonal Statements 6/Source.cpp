#include <iostream>
int main()
{
	char chri 'o';
	float a = 0;
	float b = 0,
	float c = 0;
	std::cout << "Type in your two numbers then your operation symbol(Note: Put space inbetween) :  ";
	std::cin >> a, b, chri;
	if (chri == '+')
	{
		c = a + b;
		std::cout << c;
	}
	else if (chri == '-')
	{
		c = a - b;
		std::cout << c;
	}
	else if (chri == '*')
	{
		c = a * b;
		std::cout << c;
	}
	else if (chri == '/')
	{
		c = a / b;
		std::cout << c; 
	}
	else if (chri == '%')
	{
		c = a % b;
		std::cout << c;
	}
}
