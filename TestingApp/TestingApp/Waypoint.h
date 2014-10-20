#ifndef WAYPOINT_H
#define WAYPOINT_H
#include <string>
#include <cstring>
using namespace std;


struct Waypoint
{
private:
	//location
	string longitude;
	string latitude;
	//name
	string name;
	//data for waypoint
	int altitude;
	int speed;


public:
	Waypoint(string latitude, string longitude, string name, int altitude = 0, int speed = 0);

	string getLongitude()
	{
		return longitude;
	}
	void setLongitude(string longitude)
	{
		this->longitude = longitude;
	}

	string getLatitude()
	{
		return latitude;
	}
	void setLatitude(string latitude)
	{
		this->latitude = latitude;
	}

	string getName()
	{
		return name;
	}
	void setName(string name)
	{
		this->name = name;
	}

	int getAltitude()
	{
		return altitude;
	}
	void setAltitude(int altitude)
	{
		this->altitude = altitude;
	}

	int getSpeed()
	{
		return speed;
	}
	void setSpeed(int speed)
	{
		this->speed = speed;
	}

};


#endif