#include <iostream>
#include <conio.h>
#include "WaypointParser.h"

using namespace std;

int main()
{
	
	Navaid *x = WaypointParser::natToWaypoint("5230N");

	cout << x->getLatitude() << endl;

	cout << x->getLongitude() << endl;


	delete x;
	x = NULL;
	

	_getch();
	
	return 0;
}