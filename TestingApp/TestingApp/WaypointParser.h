#ifndef WAYPOINTPARSER_H
#define WAYPOINTPARSER_H
#include "Waypoint.h"

class WaypointParser
{
private:
	bool isNatTrack(string);
	bool isGlobalTrack(string); //custom code
	bool isAirport(string); //query database
	bool isIntersection(string); //query database

	Waypoint natToWaypoint(string);
	Waypoint globalTrackToWaypoint(string);
	Waypoint queryPoint(string);

public:
	static Waypoint getWaypoint(string);
};
#endif