#include "WaypointParser.h"
#include <iostream>

using std::cout;
bool WaypointParser::isNatTrack(string x)
{
	//example nat
	//5350N
	//01234
	if( x.size() == 5 )
	{
		if( 'N' == x[4]  )
		{
			return true;
		}
	}
	return false;
}


bool WaypointParser::isGlobalTrack(string x)
{
	//example global track
	//N53W100
	//0123456
	if( x.size() == 7 )
	{
		if( 'S' == x[0] || 'N' == x[0] )
		{
			if( 'E' == x[3] || 'W' == x[3] )
			{
				return true;
			}
		}
	}

	return false;
}

Navaid *WaypointParser::natToWaypoint(string x)
{
	//example
	//5320N
	//01234
	string lon = "N" + x.substr(0,2) + "* 00.00";
	string lat = "W" + x.substr(2,2) + "0* 00.00";
	return new Navaid(lat, lon, x, WaypointType::INT);
}

Navaid *WaypointParser::globalTrackToWaypoint(string x)
{
	//example
	//N53W200
	//0123456
	string lon = x.substr(0,3) + "* 00.00";
	string lat = x.substr(3, 6) + "* 00.00";
	return new Navaid(lat, lon, x, WaypointType::INT);

}

Navaid *WaypointParser::queryAirport(string x)
{


	return NULL;
}