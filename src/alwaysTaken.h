//
// Created by locw on 22/10/19.
//

#pragma once


#include "predictor.h"

class AlwaysTaken : public Predictor {
public:
    explicit AlwaysTaken(std::vector<Branch> &branches);

    bool isTaken(Branch b) const override;
    void simulate() override;
    void print() const override;
};


