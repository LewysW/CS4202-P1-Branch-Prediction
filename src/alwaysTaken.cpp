#include <iostream>
#include "alwaysTaken.h"

AlwaysTaken::AlwaysTaken(std::shared_ptr<std::vector<Branch>> &branches) : Predictor(branches) {}

/**
 * Simluates by calling is taken for each branch and calculating the success rate
 */
void AlwaysTaken::simulate() {
    double correct = 0;

    for (auto b = getBranches()->begin(); b != getBranches()->end(); b++) {
        if (b->isTaken()) {
            correct++;
        }
    }

    setRate(correct / getBranches()->size());
}

/**
 * Always taken predictor predicts branch is always taken,
 * so simply returns true
 */
bool AlwaysTaken::isTaken(Branch b) const {
    return true;
}

void AlwaysTaken::print() {
    std::cout << "Always Taken" << std::endl;
    std::cout << "--------------------------" << std::endl;
    Predictor::print();
}
