#include "PlacedState.h"
#include "Building.h"

std::string PlacedState::getStateName() {
    return "Placed";
}

int PlacedState::getMoneyCost(Building* building) {
    return building->getCostConsumption();
}

int PlacedState::getResourceCost(Building* building) {
    return building->getResourceConsumption();
}

int PlacedState::getPowerConsumption(Building* building) {
    return 0;
}

int PlacedState::getWaterConsumption(Building* building) {
    return 0;
}