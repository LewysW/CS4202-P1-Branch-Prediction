#include <memory>
#include "predictor.h"

//Constructor for predictor
//initialises precition rate to -1
Predictor::Predictor(std::shared_ptr<std::vector<Branch>> &branches) :
        branches(branches),
        rate(-1)
{}

//Gets the list of branches to simulate
std::shared_ptr<std::vector<Branch>>& Predictor::getBranches() {
    return branches;
}

//Gets the prediction success rate
double Predictor::getRate() const {
    return rate;
}

//Sets the prediction success rate
void Predictor::setRate(double rate) {
    Predictor::rate = rate;
}

/**
 * Prints the branch prediction success rate
 */
void Predictor::print() {
    std::cout << "Branches simulated: " << getBranches()->size() << std::endl;
    std::cout << "Prediction rate: " << getRate() << std::endl << std::endl;
}
