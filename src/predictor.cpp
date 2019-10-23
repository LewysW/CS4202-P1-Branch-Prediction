#include <memory>
#include "predictor.h"

Predictor::Predictor(std::shared_ptr<std::vector<Branch>> &branches) :
        branches(branches),
        rate(-1)
{}

const std::shared_ptr<std::vector<Branch>>& Predictor::getBranches() const {
    return branches;
}

double Predictor::getRate() const {
    return rate;
}

void Predictor::setRate(double rate) {
    Predictor::rate = rate;
}

void Predictor::print() const {
    std::cout << "Branches simulated: " << getBranches()->size() << std::endl;
    std::cout << "Prediction rate: " << getRate() << std::endl << std::endl;
}
