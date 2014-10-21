#include "Waypoint.h"


Navaid::Navaid(string latitude, string longitude, string name, WaypointType waypointType, int altitude)
{
	this->longitude = longitude;
	this->latitude = latitude;
	this->name = name;
	this->waypointType = waypointType;
	this->altitude = altitude;
}

NDB::NDB(string latitude, string longitude, string name, WaypointType waypointType, int altitude, double freq, int speed)
	: Navaid(latitude, longitude, name, waypointType, altitude)
{

}
