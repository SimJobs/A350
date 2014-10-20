#ifndef WAYPOINT_H
#define WAYPOINT_H
#include <string>

using namespace std;


struct Waypoint
{
private:
	//location
	float longitude;
	float latitude;
	//name
	string name;
	//data for waypoint
	int altitude;
	int speed;


public:
	Waypoint(float latitude, float longitude, string name, int altitude = 0, int speed = 0);

	float getLongitude()
	{
		return longitude;
	}
	void setLongitude(float longitude)
	{
		this->longitude = longitude;
	}

	float getLatitude()
	{
		return latitude;
	}
	void setLatitude(float latitude)
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