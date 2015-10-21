#include "Header.h"


int main()
{	
	Tepms<int> Nums;
	Tepms<char> Char;
	cout << "Min: " << Nums.Min(1, 2) << "\nMax: " << Nums.Max(1, 2) << "\nClamp: " 
		<< Nums.Clamp(1, 2, 3) << "\nAlphaMin: " << Nums.AlphaMin('a', 'b') << "\nAlphaMax: " 
		<< Nums.AlphaMax('a', 'b') << endl;

	system("pause");
}