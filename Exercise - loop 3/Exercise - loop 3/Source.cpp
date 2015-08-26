#include <iostream>
int main()
{
	int tot = 0;
	for (int i = 0; i < 1000; i++)
	{
		if ((i % 3 && i % 5) == 0)
		{
			tot = tot+i;
		}
	}
	std::cout << tot << "\n";
	system("pause");
	return 0;
}