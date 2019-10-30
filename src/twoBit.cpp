#include "twoBit.h"

TwoBit::TwoBit(std::shared_ptr<std::vector<Branch>> &branches) : Predictor(branches) {}

/**
 * Simulates the bimodal (Two Bit) predictor
 * @param tableSize - size of table to index into
 */
void TwoBit::simulate(unsigned long long tableSize) {
    //Stores number of correct predictions
    double correct = 0;
    //Table to store address (low bits of address) and current prediction for address
    std::map<long long, int> table;
    //Stores length of address based on table size (e.g. 9 bits for 4096 = 2^9)
    auto addressLen = static_cast<unsigned int>(log2l(tableSize));
    //Maximum value that can be stored in table (all 1s of length 'addressLen')
    long long bits = (1 << addressLen) - 1;
    //Value to store index into table
    long long address;

    //Iterates through each branch in the list
    for (unsigned long i = 0; i < getBranches()->size(); i++) {
        Branch b = getBranches()->at(i);

        //Determines address to index into table with by taking the n least significant bits
        address = bits & std::stoll(b.getAddress());

        //If the value is not in the table, add it
        if (table.find(address) == table.end()) {
            table.insert(std::pair<long long, int>(address, WEAKLY_TAKEN));
        }

        //If prediction matches actual value, update correct
        if (isTaken(address, table) == b.isTaken()) {
            //Increment correct predictions
            correct++;
        }

        //Update state
        switch (table.at(address)) {
            case STRONGLY_TAKEN:
                table[address] = b.isTaken() ? STRONGLY_TAKEN : WEAKLY_TAKEN;
                break;
            case WEAKLY_TAKEN:
                table[address] = b.isTaken() ? STRONGLY_TAKEN : STRONGLY_NOT_TAKEN;
                break;
            case WEAKLY_NOT_TAKEN:
                table[address] = b.isTaken() ? STRONGLY_TAKEN : STRONGLY_NOT_TAKEN;
                break;
            case STRONGLY_NOT_TAKEN:
                table[address] = b.isTaken() ? WEAKLY_NOT_TAKEN : STRONGLY_NOT_TAKEN;
                break;
        }
    }

    setRate(correct / getBranches()->size());
}

bool TwoBit::isTaken(long address, std::map<long long, int>& table) const {
    return (table.at(address) >= WEAKLY_TAKEN);
}

void TwoBit::print(unsigned long long tableSize) {
    std::cout << "TwoBit" << std::endl;
    std::cout << "--------------------------" << std::endl;
    std::cout << "Table Size: " << tableSize << std::endl;
    Predictor::print();
}

bool TwoBit::isTaken(Branch b) const {
    return false;
}

void TwoBit::simulate() {

}
