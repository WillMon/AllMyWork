#include <iostream>
using namespace std;
struct oDeezNuts{
	oDeezNuts* oNext;
	int iDeta;};
int main()
{
	int iFirst = 0;
	oDeezNuts *oFirst;
	oDeezNuts *oSecond;
	oFirst->oNext = oSecond;
	oSecond->oNext = NULL;
}