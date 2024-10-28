#ifndef POPULATIONSTRATEGY_H
#define POPULATIONSTRATEGY_H

class PopulationStrategy {

private:
	CityMediator* mediator;

public:
	virtual int execute() = 0;

	int getPopulation();

	int getSatisfaction();

	int getAvailableHousingSpace();

	int getAverageAge();

	int getImmigrationLimit();
};

#endif
