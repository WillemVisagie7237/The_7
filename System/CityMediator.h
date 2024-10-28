#ifndef CITYMEDIATOR_H
#define CITYMEDIATOR_H

class CityMediator {


public:
	virtual bool build(string buildingName, int locationX, int locationY) = 0;

	virtual bool demolish(int locationX, int locationY) = 0;

	virtual void assignCitizenBuildings(Citizen citizen) = 0;

	virtual void nextRound() = 0;

	virtual void changeTaxRates(int newTaxRates) = 0;
};

#endif
