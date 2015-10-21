#include <iostream>
using namespace std;
void DeezNuts()
{
	cout << "Pig Latin" << endl;
}
void DeezNuts2()
{
	char Pig[10] = { "Pig Latin" };
	for (int i = 0; i < 10; i++)
		cout << (int(Pig[i])) << endl;
	system("pause");
}
void DeezNuts3()
{
	int OhReally[8] = { 79,104,82,101,97,108,108,121 };
	for (int i = 0; i < 8; i++)
		cout << (char(OhReally[i])) << endl;
	system("pause");
}
float DeezNuts4()
{
	float num2 = 10000, num1 = 756, tot;
	tot = num1 / num2;
	return tot;
	system("pause");
}
double DeezNuts5()
{
	double num2 = 10000000000000000000, num1 = 345327572345723, tot;
	tot = num2 / num1;
	return tot;
	system("pause");
}
int main()
{
	char Stuff[100] = { "badass" };
	cout << strlen(Stuff) << "\n";
	for (int i = 0; i < strlen(Stuff); i++)
		cout << Stuff[i] << endl;
	DeezNuts;
	DeezNuts2();
	DeezNuts3();
	cout << DeezNuts4() << endl;
	cout << DeezNuts5() << endl;
	system("pause");

}