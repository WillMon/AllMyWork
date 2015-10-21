#include <iostream>
class Date
{
public:
	Date(int, int, int);
	Date();
	int iDD, iMM, iYYYY;
};
Date::Date(int d, int m, int y)
{
	int day = d, month = m, year = y;
}
void Date::PrintDate()
