#pragma once

#include <memory>
#include <map>
#include <cmath>
#include "predictor.h"

#define STRONGLY_NOT_TAKEN 0
#define WEAKLY_NOT_TAKEN 1
#define WEAKLY_TAKEN 2
#define STRONGLY_TAKEN 3

class GShare : public Predictor {
public:
    explicit GShare(std::shared_ptr<std::vector<Branch>> &branches);

    bool isTaken(long address, std::map<long long, int>& table) const;
    void simulate(unsigned long long tableSize);
    void print(unsigned long long tableSize) const;

    bool isTaken(Branch b) const override;
    void simulate() override;
};


