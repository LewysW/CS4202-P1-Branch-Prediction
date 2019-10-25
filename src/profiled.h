#pragma once


#include <memory>
#include <map>
#include "predictor.h"

#define NONE 0
#define TWO_BIT 1
#define GSHARE 2

class Profiled : public Predictor {
private:
    std::map<unsigned long long, int> strategies;
public:
    explicit Profiled(std::shared_ptr<std::vector<Branch>> &branches);

    bool isTaken(Branch b) const override;

    void simulate(unsigned long long tableSize);

    void simulate() override;

    void print(unsigned long long tableSize);
};


