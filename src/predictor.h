#pragma once
#include <vector>
#include <iostream>
#include "branch.h"

class Predictor {
private:
    std::vector<Branch> branches;
    double rate;

public:
    explicit Predictor(std::vector<Branch> &branches);

    const std::vector<Branch> &getBranches() const;

    double getRate() const;

    void setRate(double rate);

    virtual bool isTaken(Branch b) const = 0;

    virtual void simulate() = 0;

    virtual void print() const;
};


