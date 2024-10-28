#ifndef DEMOLISHED_STATE_H
#define DEMOLISHED_STATE_H

#include "BuildingState.h"

class DemolishedState : public BuildingState {
public:
    std::string getStateName() override;
    int getMoneyCost(Building* building) override;
    int getResourceCost(Building* building) override;
    int getPowerConsumption(Building* building) override;
    int getWaterConsumption(Building* building) override;
};

#endif // DEMOLISHED_STATE_H