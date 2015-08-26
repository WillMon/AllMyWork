#include <iostream>
using namespace std;
int main()
{
	char num;
	std::cout << " Choose a number from 1-4:";
	std::cin >> num;
	switch(num)
	{
	case '1': std::cout << "1" << std::endl;
		system("pause");
		break;
	case '2': std::cout << "2" << std::endl;
		system("pause");
		break;
	case '3': std::cout << "3" << std::endl;
		system("pause");
		break;
	case '4': std::cout << "4" << std::endl;
		system("pause");
		break;
	default:
		cout << "Invalid" << std::endl;

		system("pause/t");
	}
}