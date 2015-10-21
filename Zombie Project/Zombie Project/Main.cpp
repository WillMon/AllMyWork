#include "Zumbie.h"


void OtherDeSkellyArray(oZumbie z[])
{
	for (int i = 0; i < sizeof(z); ++i)
	{
		z[i].HealthGen();
		z[i].AttackGen();
		z[i].randomOccupation();
	}

}


void main()
{	
	oZumbie zum[15];

	OtherDeSkellyArray(zum);

	system("pause");
}