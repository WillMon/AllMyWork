#include "GameSave.h"
using namespace std;
void main()
{		
	oSaveGame DEEZNUTS;

	string sSaveInput;

	bool bRunning = true;
	while (bRunning)
	{
		cout << "Type in [Save] to save to save file\nType in [Edit] to Edit Savefile\nType in [Display] to dispaly\n Type in [Close] to Stop the Program: ";
		cin >> sSaveInput;
		if (sSaveInput == "Save")
		{
			cout << "Enter your Boolion";
			DEEZNUTS.SaveFiles();
		}
		else if(sSaveInput == "Dispaly") 
			DEEZNUTS.DisplayFiles();
		else if (sSaveInput == "close")
			bRunning = false;
	}
	
	
}