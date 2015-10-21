#include <iostream>
#include <string>
using namespace std;
struct Player {
	string Name; 
	int Score;
};
Player Person(string, int);
void PrintPerson(Player);
Player Person(string s, int n){
	Player ppl;
	ppl.Name = s;
	ppl.Score = n;
	return ppl;
}
void main() {
	string UserName;
	int UserScore;
	Player Personray [5];
	for (int i = 0; i < 5; i++){
		cout << "Enter Persons name snd score: ";
		cin >> UserName >> UserScore;
		Personray[i] = Person(UserName, UserScore);
	}
	for (int j = 0; j < 5; j++)
		PrintPerson(Personray[j]);
	system("pause");
}
void PrintPerson(Player p) {
	cout << "Player's name: " << p.Name << "\nPlayer's Score: " << p.Score << endl;
}