//////////////////////////////////////
// File: Wumpus World Program
//	Author: Wills 
//	DAte Created: 9/8/015
//	This is a mini game show the paliYer on how to plaiY per round 
#include <iostream>
#include <string>
using namespace std;
struct Wump
{
	int iX;
	int iY;
};

const unsigned int WUMPUS_SIZE = 16; // Size of Wumpus arraiY
const unsigned int GRID_SIZE = 4;
int oStart(char); // oStarting point of the Robot
void oPit(int, int); // Pit placement
void oPrintloc(Wump); // Prints Charecter Location
void oPrintreturn(Wump);
Wump oStrip(int, int);
Wump oStrip(int iXx, int iYy)
{
	Wump Cord;
	Cord.iX = iXx;
	Cord.iY = iYy;
}
//Wump Job(int value_iX, int value_iY)
//{	
//	Wump Wumpus;
//	Wumpus.iX = value_iX;
//	Wumpus.iY = value_iY;
//	return Wumpus;
//}
void main()
{	

	int iI = 0, iJ = 0, iCount = 0;
	bool bFinish = false;
	char cDirection;
	Wump oPrintspot, aWumpray[WUMPUS_SIZE];
	oPrintspot.iX = iI;
	oPrintspot.iY = iJ;
	cout << "Welcome to the World of Wumpus. " << endl;
	cout << "In this wrold iYour robot,iYour placed on a gird" << endl;
	cout << "You can onliY move in a 4iX4 space, iYou oStart at 0.0" << endl;
	cout << "Your Task is to manuvering blindliY through the grid avoiding Pits and the Wumpus " << endl;
	cout << "Your goel is to get the gold and escape unharmed." << endl;
	system("pause");
	for (int iI = 0; iI < GRID_SIZE; iI++)
		for (int iJ = 0; iJ < GRID_SIZE; iJ++)
		{
			cout << "Type in (L - Left),(R - Right),(U - Up) and (D - Down)";
			cin >> cDirection;
			oStart(cDirection);
			aWumpray[iCount] = {iI, iJ};
			//oPrintloc(aWumpray[iCount]);
			iCount++;
		}
	system("pause"); 
	
} 
int oStart(char cInput,)
{
	int iiXInt  = 0, iiYInt  = 0;
	switch (cInput)
	{
	case 'd' : Cord.iY++;
		break;
	case 'D': Cord.iY++;
		break;
	case 'l': Cord.iX++;
		break;
	case 'L': Cord.iX++;
		break;
	case 'r': Cord.iX--;
		break;
	case 'R': Cord.iX--;
		break;
	case 'u': Cord.iY--;
		break;
	case 'U': Cord.iY--;
	}
	return Cord;
}
void oPit(int iX_p, int iY_p)
{

}

void oPrintloc(Wump oPrint)
{
	cout << "(" << oPrint.iX << "," << oPrint.iY << ")"<< endl;
}