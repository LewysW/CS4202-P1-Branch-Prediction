#include "predictor.h"

const std::vector<Branch> &Predictor::getBranches() const {
    return branches;
}

Predictor::Predictor(std::vector<Branch> &branches) :
        branches(std::move(branches)),
        rate(-1)
{}

double Predictor::getRate() const {
    return rate;
}

void Predictor::setRate(double rate) {
    Predictor::rate = rate;
}
