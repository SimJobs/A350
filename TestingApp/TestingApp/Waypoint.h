#ifndef WAYPOINT_H
#define WAYPOINT_H
#include <string>
#include <cstring>

using namespace std;


enum WaypointType
{
	VOR,
	NDB,
	INT,
	AIRPORT,
	SIDINT,
	STARINT
};


struct Navaid
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

	double freq;
	WaypointType waypointType;

public:
	//vor 108.0 to 117.95 MHz
	Navaid();
	Navaid(string latitude, string longitude, string name, WaypointType waypointType, int altitude = 0);
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

struct NDB : public Navaid
{
private:
	double freq;
	int speed;
public:
	//ndb 190 and 1750 kHz
	NDB(string lat, string lon, string name, WaypointType type, int altitude, double freq = 190, int speed = 0);

	double getFreq()
	{
		return freq;
	}

	void setFreq(double freq)
	{
		if( freq < 190 )
		{
			this->freq = 190;
		}
		else if( freq > 1750 )
		{
			this->freq = 1750;
		}
		else
		{
			this->freq = freq;
		}
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