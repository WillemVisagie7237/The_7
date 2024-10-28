#include "CompleteState.h"
#include "Building.h"

std::string CompletedState::getStateName() {
    return "Completed";
}

int CompletedState::getMoneyCost(Building* building) {
    return 0;
}

int CompletedState::getResourceCost(Building* building) {
    return 0;
}

int CompletedState::getPowerConsumption(Building* building) {
    return building->getPowerConsumption() / 2;
}

int CompletedState::getWaterConsumption(Building* building) {
    return building->getWaterConsumption() / 2;
}