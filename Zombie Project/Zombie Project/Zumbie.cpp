#include "Zumbie.h"

oZumbie::oZumbie()
{
	iHeath = 0;
	iAttack = 0;
	sOccupation = "";
}
// Accese To the Private Variables
//oZumbie::oZumbie(int iHealthChange,int iAttackChange, string sOccupationChange)
//{	
//	iHeath = iHealthChange;
//	iAttack = iAttackChange;
//	sOccupation = sOccupationChange;
//}

// RAndomly genarates a occupation for the Skellies 
string oZumbie::randomOccupation()
{
	int iRAndomNum = rand() % 5 + 1;
	string sStringValue;
	switch (iRAndomNum)
	{
	case 1: 
		sOccupation =  "Donut Skelly";
		break;
	case 2: 
		sOccupation = "Sugar Cane Dude";
		break;
	case 3: 
		sOccupation = "AIE PROGRAMING TEACHER";
		break;
	case 4:
		sOccupation = "Teacher Assistant";
		break;
	case 5: 
		sOccupation = "The sKELLY w/ DEEZ NUTs";
		break;
	default:
		break;
	}	
	return sOccupation;
}

// Randomly Genartes the Health of the Skellies 
int oZumbie::HealthGen()
{
	int randdom = rand() % 2;
	if (randdom = 0)
		iHeath = 50;
	else if (randdom = 1)
		iHeath = 100;
	return iHeath;
}

// Randomly Genartes the attack for the Skellies 
int oZumbie::AttackGen()
{
	int  iAttackGen = rand() % 3 + 0;
	switch (iAttackGen)
	{
	case 0: iAttack = 25;
		break;
	case 1: iAttack = 50;
		break;
	case 2: iAttack = 75;
		break;
	case 3: iAttack = 100;
		break;
	}
	return iAttack;
}

// assigns values to the array cells 
//oZumbie oZumbie::DeSkellyArray()
//{
//
//
//}

// Attempt at a linked list
//oZumbie oZumbie::ZumbieCopies()
//{
//
//	for (int i = 0; i < 15; ++i)
//	{
//		oZumbie *ZumbieOne;
//		oZumbie *ZumbieTwo;
//		ZumbieOne->Next = ZumbieTwo;
//	}
