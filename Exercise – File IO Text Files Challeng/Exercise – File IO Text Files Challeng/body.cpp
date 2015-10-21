
#include "GameSave.h"
using namespace std;
 oSaveGame::oSaveGame()
{
	iIntager;
	fFloat;
	bBoolion;
	cPointer;

}
void oSaveGame::UserCammand(string sInput)
{
	if (sInput == "Save")
	{
	
	}
	
}

void oSaveGame::DisplayFiles()
{
	ifstream Login;

	string sDIsplay;
		while (!Login.eof())
		{
			getline(Login, sDIsplay);
			cout << sDIsplay << endl;
		}
}
void oSaveGame::SaveFiles()
{	
	ofstream Save;
	int iUsersInt = iIntager;;
	float fUsersFloat = fFloat;
	bool bUsersBoolion = bBoolion;
	char* cPointerChar = cPointer;
	Save.open("MemorySave.txt", ios_base::app);
	Save << "Int: " << iUsersInt << endl;
	Save << "Flaot: " <<fUsersFloat << endl;
	Save << "Bool: " << bUsersBoolion << endl;
	Save << "Char: " << *cPointerChar << endl;
	cout << "Confermation on your save data: YOU File Was Sasve" << endl;
	Save.close();
}