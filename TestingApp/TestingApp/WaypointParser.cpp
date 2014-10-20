#include "WaypointParser.h"

bool WaypointParser::isNatTrack(string x)
{

	if( x.size() == 5 )
	{
		if( 'N' == x[5]  )
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
	if( x.size() == 6 )
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