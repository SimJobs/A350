#include <iostream>
#include <conio.h>
#include "WaypointParser.h"

using namespace std;

int main()
{
	Waypoint *x = WaypointParser::natToWaypoint("5230N");

	cout << x->getLatitude() << endl;
	_getch();
	return 0;
}