#ifndef WAYPOINT_H
#define WAYPOINT_H
#include <string>

using namespace std;

namespace Backend
{
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
		float getLatitude()
		{
			return latitude;
		}
		string getName()
		{
			return name;
		}
		int getAltitude()
		{
			return altitude;
		}
		int getSpeed()
		{
			return speed;
		}



	};
}

#endif