#include <iostream>
using namespace std;
float sum(float addition1, float addition2) { // Set the the Function
	float tot; // my return variable
	tot = addition1 + addition2; // adds my total and sets it to total
	return tot; //returns my total
}
int main() {
	cout << "The Total: " << sum(5.5f, 6.7f) <<endl; //Prints out the total
	system("pause");
}