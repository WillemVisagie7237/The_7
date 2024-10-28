#ifndef COMPLETED_STATE_H
#define COMPLETED_STATE_H

#include "BuildingState.h"

class CompletedState : public BuildingState {
public:
    std::string getStateName() override;
    int getMoneyCost(Building* building) override;
    int getResourceCost(Building* building) override;
    int getPowerConsumption(Building* building) override;
    int getWaterConsumption(Building* building) override;
};

#endif // COMPLETED_STATE_H