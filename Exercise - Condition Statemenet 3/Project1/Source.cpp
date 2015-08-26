#include <iostream>
// Exercise – Conditional Statements #3
int main()
{	
	int avg, num, tot = 0;
	// Prints out to the user what number he wants to average out
	for (avg = 0; avg < 5; avg++)
	{
		std::cout << "Type in your number: ";
		std::cin >> num;
		// adds the numbers placed by the user 
		 tot += num;
		
	}
	//averages out the five numbers 
	tot = tot / avg;
	std::cout << "Your avrerage is: " << tot << std::endl;
	system("pause");
}