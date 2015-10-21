#include <iostream>
#include <string>
using namespace std;


struct Store
{
	string name;
	int quan;
	int cost;
	int souls = 10000;
};


void PrintInv(Store);
void EditCost(string, int, int);
void EditStock(Store);
void SellStock(Store);

Store Inventory(string, int, int);
Store Inventory(string item, int ammount, int money) {
	Store Purches;
	Purches.name = item;
	Purches.quan = ammount;
	Purches.cost = money;
	return Purches;
}

void main() {
	int Change;

	Store Loydes = Inventory("Loydes", 10, 500);
	Store Estus = Inventory("Estus Flask", 12, 10000);
	Store Humanity = Inventory("Humanity", 1, 30000);
	Store Homeword = Inventory("Homeword Bone", 20, 800);
	Store Greenblossm = Inventory("Greenblossm", 99, 1200);
	Store purpleMoss = Inventory("Purple Moss", 5, 500);
	Store purgingStone = Inventory("Purging Stone", 2, 6000);
	/*Store Inventoeryray[9] = { 
		Loydes, Estus ,Humanity, Homeword ,Greenblossm ,purpleMoss,purgingStone };
*/
	cout << "Enter price change of each item in the shop:";
	cin >> Change;

	//for (int i = 0; i < 6; i++) {
	//	EditCost(Inventoeryray[i].name, Inventoeryray[i].cost, Change);
	//}


	system("pause");
}
void EditCost(string name, int ammount, int change)
{
	int tot = ammount + change;
	cout << name << ", value is now: " << tot << endl;
}
