#pragma once


#include <memory>
#include "predictor.h"

class Profiled : public Predictor {
public:
    Profiled(std::shared_ptr<std::vector<Branch>> &branches);

    bool isTaken(Branch b) const override;

    void simulate() override;

    void print();
};


