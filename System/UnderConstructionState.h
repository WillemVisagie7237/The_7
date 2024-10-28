#ifndef UNDER_CONSTRUCTION_STATE_H
#define UNDER_CONSTRUCTION_STATE_H

#include "BuildingState.h"

class UnderConstructionState : public BuildingState {
public:
    std::string getStateName() override;
    int getMoneyCost(Building* building) override;
    int getResourceCost(Building* building) override;
    int getPowerConsumption(Building* building) override;
    int getWaterConsumption(Building* building) override;
};

#endif // UNDER_CONSTRUCTION_STATE_H