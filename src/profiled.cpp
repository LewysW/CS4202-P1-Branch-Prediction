#include "profiled.h"
#include "GShare.h"
#include "twoBit.h"
#include "alwaysTaken.h"

/**
 * Simulates profiled approach.
 * Acts as though run statically during compile time.
 * Compiler would simulate other branch prediction approaches on program being compiled,
 * and would record in the binary which strategy produced the best result for that program
 * with each table size.
 * @param tableSize
 */
void Profiled::simulate(unsigned long long tableSize) {
    std::shared_ptr<std::vector<Branch>> branchList = getBranches();


    //If the best strategy is two bit, simluate two bit
    if (strategies[tableSize] == TWO_BIT) {
        TwoBit twoBit(branchList);
        twoBit.simulate(tableSize);
        setRate(twoBit.getRate());
    //Otherwise, simulate gshare
    } else if (strategies[tableSize] == GSHARE) {
        GShare gShare(branchList);
        gShare.simulate(tableSize);
        setRate(gShare.getRate());
    }
}

/**
 * Constructor for Profiled approach.
 * Constructs a table of best strategies for the given program at each table size from 2^9 to 2^19
 */
Profiled::Profiled(std::shared_ptr<std::vector<Branch>> &branches) : Predictor(branches) {
    TwoBit twoBit(branches);
    GShare gShare(branches);

    //Records which strategy was most effective at each table size for the given program
    for (int i = 9; i < 20; i++) {
        twoBit.simulate(static_cast<unsigned long long>(pow(2, i)));
        gShare.simulate(static_cast<unsigned long long>(pow(2, i)));

        strategies[pow(2, i)] = twoBit.getRate() > gShare.getRate() ? TWO_BIT : GSHARE;
    }
}

/**
 * Prints results of profiles approach
 * @param tableSize
 */
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


