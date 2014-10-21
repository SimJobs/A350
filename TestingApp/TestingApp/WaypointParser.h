#ifndef WAYPOINTPARSER_H
#define WAYPOINTPARSER_H
#include "Waypoint.h"

static class WaypointParser
{
public:
	static bool isNatTrack(string);
	static bool isGlobalTrack(string); //custom code

	static Navaid *natToWaypoint(string);
	static Navaid *globalTrackToWaypoint(string);
	static Navaid *queryPoint(string);
	static Navaid *queryAirport(string);

	static Navaid *getWaypoint(string);
};
#endif