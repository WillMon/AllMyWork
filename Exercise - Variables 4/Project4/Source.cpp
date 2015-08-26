#include <iostream>
int main()
{
	int a, b, c;
	std::cout << "Type in a number for a: ";
	std::cin >> a;
	std::cout << "Type in your a number for b: ";
	std::cin >> b;
	c = a; 
	a = b;
	b = c;
	std::cout << "Your value for a is now " << a << "\nand now yor value for b is " << b  << std::endl;
	system("pause");
	return 0;
}