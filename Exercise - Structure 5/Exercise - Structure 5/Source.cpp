#include <iostream>
#include <string>
using namespace std;
struct Player {
	string Name;
	int Score;
};
Player Person(string, int);
void Investagation(Player,string);
Player Person(string s, int n) {
	Player ppl;
	ppl.Name = s;
	ppl.Score = n;
	return ppl;
}
bool found = false;
void main() 
{
	string UserName, Loc;
	int UserScore;
	Player Personray[5];
	for (int i = 0; i < 5; i++) {
		cout << "Enter Persons name snd score: ";
		cin >> UserName >> UserScore;
		Personray[i] = Person(UserName, UserScore);
	}
	cout << "Who is the person your looking for: ";
	cin >> Loc;
	for (int j = 0; j < 5; j++)
		Investagation(Personray[j], Loc);
	if (found == false)
		cout << "Sorry, the person your loooking for is not listed\n";
	system("pause");
}
void Investagation(Player calp,string per)
{
	int count=0;
	if (calp.Name == per)
	{
		cout << calp.Score << endl;
		found = true;
	}

		/*cout << "There person your looking for is in";
	else if (calp.Name != per)
		cout << "Sorry, the person your loooking for is not listed";*/
}
