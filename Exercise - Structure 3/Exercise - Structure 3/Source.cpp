#include <iostream>
#include <string>
using namespace std;
void Player(string name, int score) {
	cout << "Player's name: " << name << "\nPlayer's Score: " << score << endl;
}
int main() {
	string NAME;
	int SCORE;
	cout << "Enter your players Name & Score: ";
	cin >> NAME >> SCORE;
	Player(NAME, SCORE);
	system("pause");
}