#include <iostream>
using namespace std;
class Date{
public:
	Date();
	int day;
	int month;
	int year;
	~Date();
private:
};
/*Creat a date object 
PArameter: d, m,y
where d is the day 
m is the monyj 
y is the year 
PostCondition: a Date object that will contain the day month
and year specifried bt user 
Usage: Date <variable name>(31< 08,2015);
*/
Date::Date(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
}
void Date::PrintDate() {
	cout << "day is " << day << endl;;
	cout << "month is " << month << endl;
	cout << "year is " << year << endl;

}