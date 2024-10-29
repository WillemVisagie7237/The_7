#include <exception>
#include <string>
using namespace std;

#ifndef __Building_h__
#define __Building_h__

// #include "Client.h"

class Client;
class Building;

__abstract class Building
{
	private: int _coordinateY;
	private: int _coordinateX;
	private: int _space;
	private: int _occupancy;
	public: Client* _unnamed_Client_;

	public: virtual void construct() = 0;

	public: virtual void maintain() = 0;

	public: virtual double getMaintenanceCost() = 0;

	public: virtual int getSize() = 0;

	public: virtual string getBuildingType() = 0;
};

#endif
