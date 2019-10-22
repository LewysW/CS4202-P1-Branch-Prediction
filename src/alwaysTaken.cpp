//
// Created by locw on 22/10/19.
//

#include <iostream>
#include "alwaysTaken.h"

AlwaysTaken::AlwaysTaken(std::vector<Branch> &branches) : Predictor(branches) {}

void AlwaysTaken::simulate() {
    double correct = 0;

    for (const Branch& b : getBranches()) {
        if (isTaken(b) == b.isTaken()) {
            correct++;
        }
    }

    setRate(correct / getBranches().size());
}

bool AlwaysTaken::isTaken(Branch b) const {
    return true;
}