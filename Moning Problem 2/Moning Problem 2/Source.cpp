#include <iostream>
#include <string>
using namespace std;
struct Build {
	string name;
	int vit;
	int str;
	int def;
	int end;
	int speed;
};
Build Vitality(int, int, int);
void Weapon(int);
float Avrage(int, int, int);
float Avrage(int t, int w, int c) {
	float tot;
	tot = t + w + c;
	tot /= 3;
	return tot;
}
void Weapon(int s) {
	if (s > 13)
		cout << "You can whild the Zwei-Hander oneHanded" << endl;
	else if (s <= 13 && s>= 7)
		cout << "You cant oneHand the Zwei_Hander but you can twoHand it" << endl;
	else if (s < 7)
		cout << "Your not worthy of the Zwei " << endl;
}
Build Character(string n, int v , int st, int d, int e,int sp){
	Build Char;
	Char.name = n;
	Char.vit = v;
	Char.str = st;
	Char.def = d;
	Char.end = e;
	Char.speed = sp;
	return Char;
}
void main() {
	Build Thief = Character("Thif",9,5,10,11,15);
	Build Warrier = Character("Warrier",11,15,15,10,5);
	Build Claric = Character("Claric",11,12,12,6,9 );
	Weapon(Thief.str);
	Weapon(Warrier.str);
	Weapon(Claric.str);
	cout << "The Avrage for the Classes is: " 
		<< Avrage(Thief.vit, Warrier.vit, Claric.vit)
	<< endl;
	system("pause");
}