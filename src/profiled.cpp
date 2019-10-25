#include "profiled.h"
#include "GShare.h"
#include "twoBit.h"
#include "alwaysTaken.h"

void Profiled::simulate(unsigned long long tableSize) {
    std::shared_ptr<std::vector<Branch>> branchList = getBranches();

    if (strategies[tableSize] == TWO_BIT) {
        TwoBit twoBit(branchList);
        twoBit.simulate(tableSize);
        setRate(twoBit.getRate());
    } else if (strategies[tableSize] == GSHARE) {
        GShare gShare(branchList);
        gShare.simulate(tableSize);
        setRate(gShare.getRate());
    }
}

Profiled::Profiled(std::shared_ptr<std::vector<Branch>> &branches) : Predictor(branches) {
    TwoBit twoBit(branches);
    GShare gShare(branches);

    for (int i = 9; i < 20; i++) {
        twoBit.simulate(static_cast<unsigned long long>(pow(2, i)));
        gShare.simulate(static_cast<unsigned long long>(pow(2, i)));

        strategies[pow(2, i)] = twoBit.getRate() > gShare.getRate() ? TWO_BIT : GSHARE;
    }
}

void Profiled::print(unsigned long long tableSize) {
    std::cout << "Profiled" << std::endl;
    std::cout << "--------------------------" << std::endl;
    std::cout << "Table Size: " << tableSize << std::endl;
    Predictor::print();
}

bool Profiled::isTaken(Branch b) const {
    return false;
}

void Profiled::simulate() {};


