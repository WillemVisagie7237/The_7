#include "DemolishedState.h"
#include "Building.h"

std::string DemolishedState::getStateName() {
    return "Demolished";
}

int DemolishedState::getMoneyCost(Building* building) {
    return building->getCostConsumption() / 2;
}

int DemolishedState::getResourceCost(Building* building) {
    return building->getResourceConsumption() / 2;
}

int DemolishedState::getPowerConsumption(Building* building) {
    return 0;
}

int DemolishedState::getWaterConsumption(Building* building) {
    return 0;
}