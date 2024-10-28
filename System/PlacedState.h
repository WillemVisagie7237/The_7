#ifndef PLACED_STATE_H
#define PLACED_STATE_H

#include "BuildingState.h"

class PlacedState : public BuildingState {
public:
    std::string getStateName() override;
    int getMoneyCost(Building* building) override;
    int getResourceCost(Building* building) override;
    int getPowerConsumption(Building* building) override;
    int getWaterConsumption(Building* building) override;
};

#endif // PLACED_STATE_H