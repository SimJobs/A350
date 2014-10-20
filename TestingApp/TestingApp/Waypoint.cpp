#include "Waypoint.h"


Waypoint::Waypoint(string latitude, string longitude, string name, int altitude, int speed)
{
	this->longitude = longitude;
	this->latitude = latitude;
	this->name = name;
	this->altitude = altitude;
	this->speed = speed;
}
