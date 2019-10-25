#pragma once


#include <memory>
#include "predictor.h"

class AlwaysTaken : public Predictor {
public:
    explicit AlwaysTaken(std::shared_ptr<std::vector<Branch>> &branches);

    bool isTaken(Branch b) const override;
    void simulate() override;
    void print() override;
};


