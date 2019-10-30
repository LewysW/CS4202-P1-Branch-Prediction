#pragma once
#include <vector>
#include <iostream>
#include "branch.h"

/**
 * Super class representing a branch prediction strategy
 */
class Predictor {
private:
    std::shared_ptr<std::vector<Branch>> branches;
    double rate;

public:
    explicit Predictor(std::shared_ptr<std::vector<Branch>> &branches);

    std::shared_ptr<std::vector<Branch>>& getBranches();

    double getRate() const;

    void setRate(double rate);

    virtual bool isTaken(Branch b) const = 0;

    virtual void simulate() = 0;

    virtual void print();
};


