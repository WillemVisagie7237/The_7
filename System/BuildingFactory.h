#include <exception>
using namespace std;

#ifndef __BuildingFactory_h__
#define __BuildingFactory_h__

// #include "Client.h"
// #include "CommercialBuilding.h"
// #include "IndustrialBuilding.h"
// #include "LandmarkBuilding.h"

class Client;
class CommercialBuilding;
class IndustrialBuilding;
class LandmarkBuilding;
class BuildingFactory;

__abstract class BuildingFactory
{
	public: Client* _unnamed_Client_;

	public: virtual void createResidential(const std::string& aType) = 0;

	public: virtual CommercialBuilding* createCommercial(const std::string& aType) = 0;

	public: virtual IndustrialBuilding* createIndustrial(const std::string& aType) = 0;

	public: virtual LandmarkBuilding* createLandmark(const std::string& aType) = 0;
};

#endif
