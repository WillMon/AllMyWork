#include <iostream>
#include <string>
using namespace std;


struct Store{
	string name;
	int quan;
	int cost;
	int souls = 10000;
};


void PrintInv(string, int, int);
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
	int editPrice,addStoc;

	Store Loydes = Inventory("Loydes", 10, 500);
	Store Estus = Inventory("Estus Flask", 12, 10000);
	Store Humanity = Inventory("Humanity", 1, 30000);
	Store Homeword = Inventory("Homeword Bone", 20, 800);
	Store Greenblossm = Inventory("Greenblossm", 99, 1200);
	Store purpleMoss = Inventory("Purple Moss", 5, 500);
	Store Inventoeryray[9] = {
	Loydes, Estus ,Humanity, Homeword ,Greenblossm ,purpleMoss };
	
	for (int i = 0; i < 5; i++) {
		PrintInv(Inventoeryray[i]);
	}
	cout << "Enter price change of each item in the shop:";
	cin >> editPrice;


	for (int i = 0; i < 5; i++) {
(Inventoeryray[i].name, Inventoeryray[i].cost, editPrice);
	}
	cout << "Witch iteam do you wish to add to stock: ";
	cin >> addStoc;
	//for (int i = 0; i < 6; i++)
	system("pause");
}
	void PrintInv(string a_name,int a_quanity, int a_cost) {
		cout << a_name <<"- Quanity: "<< aquanity
	}
void EditCost(string b_name, int ammount, int change){
	int tot = ammount + change;
	cout << b_name << ", value is now: " << tot << endl;
}
void EditStock()