#ifndef GAVESAVE_H
#define GAMESAVE_H

#include <fstream>
#include <string>
#include <iostream>
using namespace std;
class oSaveGame
{
public:
	oSaveGame();

	void UserCammand(string);
	void SaveFiles();
	void DisplayFiles();
private:
	char cCharacter = 'D';
	int iIntager = 69;
	float fFloat = 69.69f;
	bool bBoolion  = false;
	char* cPointer = &cCharacter;
};
#endif