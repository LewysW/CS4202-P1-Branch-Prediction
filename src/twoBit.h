#pragma once

#include <map>
#include <cmath>
#include <memory>
#include "predictor.h"

#define STRONGLY_NOT_TAKEN 0
#define WEAKLY_NOT_TAKEN 1
#define WEAKLY_TAKEN 2
#define STRONGLY_TAKEN 3

class TwoBit : public Predictor {
public:
    explicit TwoBit(std::shared_ptr<std::vector<Branch>> &branches);

    bool isTaken(long address, std::map<long long, int>& table) const;
    void simulate(unsigned long long tableSize);
    void print(unsigned long long tableSize) const;

    bool isTaken(Branch b) const override;
    void simulate() override;
};


