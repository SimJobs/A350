#ifndef WAYPOINTPARSER_H
#define WAYPOINTPARSER_H
#include "Waypoint.h"

static class WaypointParser
{
public:
	static bool isNatTrack(string);
	static bool isGlobalTrack(string); //custom code
	static bool isAirport(string); //query database
	static bool isIntersection(string); //query database

	static Waypoint *natToWaypoint(string);
	static Waypoint *globalTrackToWaypoint(string);
	static Waypoint *queryPoint(string);

	static Waypoint *getWaypoint(string);
};
#endif