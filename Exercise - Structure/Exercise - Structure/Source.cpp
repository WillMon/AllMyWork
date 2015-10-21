#include <iostream>
#include <string>
using namespace std;
struct GridPoint {
	float x, y;
};
struct Volacity {
	float size, distance;
};
struct Player {
	int Health;
	int Score;
	int Damage;
	GridPoint gp;
	Volacity v;
};
struct Monster {
	int Health;
	GridPoint gp;
	Volacity v;
};
void main() {
	Monster Pongo = { 9000,{ 10,10 } ,{3.0f,7.3f} };
	Player Dogma = { 110,0,200,{10,10},{0,0} };
	if (Dogma.gp.x == Pongo.gp.x && Dogma.gp.y == Pongo.gp.y)
	{
		Pongo.Health -= Dogma.Damage;
		Dogma.Score += 20;
	}
	cout << "Pongo Health: " <<Pongo.Health << "\nDogma Score: " << Dogma.Score << endl;
	system("pause");
}