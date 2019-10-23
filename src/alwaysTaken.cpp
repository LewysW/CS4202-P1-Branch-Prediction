#include <iostream>
#include "alwaysTaken.h"

AlwaysTaken::AlwaysTaken(std::shared_ptr<std::vector<Branch>> &branches) : Predictor(branches) {}

void AlwaysTaken::simulate() {
    double correct = 0;

    for (auto b = getBranches()->begin(); b != getBranches()->end(); b++) {
        if (b->isTaken()) {
            correct++;
        }
    }

    setRate(correct / getBranches()->size());
}

bool AlwaysTaken::isTaken(Branch b) const {
    return true;
}

void AlwaysTaken::print() const {
    std::cout << "Always Taken" << std::endl;
    std::cout << "--------------------------" << std::endl;
    Predictor::print();
}
