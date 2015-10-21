///////////////////////////////////////////
// 
//// AIE Year 1 2015           File: Zumbies Program
// Wills                     Submission date:9/28/015
//
////////////////////////////////////////////////////////
#ifndef _ZUMBIE_H_
#define _ZUMBIE_H_
#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;

class oZumbie
{
public:	
	oZumbie();
	// Accese To the Private Variables
	void oZumbieSetValues(int iHealthChange, int iAttackChange, string sOccupationChange)
	{
		iHeath = iHealthChange;
		iAttack = iAttackChange;
		sOccupation = sOccupationChange;
	}	
	int HealthGen(); // Randomly genarates a ni	
	int AttackGen();
	string randomOccupation(); // Randomly genarates a occupation from the list of occupation listed 

	// Makes the Zumbie array
	void DeSkellyArray()
	{
		oZumbie ZumbieRay[15];
		for (int i = 0; i < 15; ++i)
		{
			ZumbieRay[i].iHeath = HealthGen();
			ZumbieRay[i].iAttack = AttackGen();
			ZumbieRay[i].sOccupation = randomOccupation();
		}

	}
	

	//oZumbie ZumbieCopies();
private:
	int iHeath; 
	int iAttack;
	string sOccupation;

protected:

};  

//struct oZumbieCombo
//{
//	
//	oZumbie ItsAlive;
//};
#endif