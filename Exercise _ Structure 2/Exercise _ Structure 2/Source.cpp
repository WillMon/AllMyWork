#include <iostream>
#include <string>
using namespace std;
struct Player {
	string name;
	int Score;
};
void main() {
	Player Input;
	cout << "Enter your players Name & Score: ";
	cin >> Input.name >> Input.Score;
	cout << "Player's name: " << Input.name << "\nPlayer's Score: " << Input.Score << endl;
	system("pause");
}