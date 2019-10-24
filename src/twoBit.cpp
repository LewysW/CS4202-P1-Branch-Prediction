#include "twoBit.h"

TwoBit::TwoBit(std::shared_ptr<std::vector<Branch>> &branches) : Predictor(branches) {}

void TwoBit::simulate(unsigned long long tableSize) {
    double correct = 0;
    std::map<long long, int> table;
    auto addressLen = static_cast<unsigned int>(log2l(tableSize));
    long long bits = (1 << addressLen) - 1;
    long long address;

    //Iterates through each branch in the list
    for (unsigned long i = 0; i < getBranches()->size(); i++) {
        Branch b = getBranches()->at(i);

        //Determines address to index into table with by taking the n least significant bits
        address = bits & std::stoll(b.getAddress());

        //If the value is not in the table, add it
        if (table.find(address) == table.end()) {
            table.insert(std::pair<long long, int>(address, STRONGLY_TAKEN));
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

    std::cout << "Table size:" << table.size() << std::endl;
    setRate(correct / getBranches()->size());
}

bool TwoBit::isTaken(long address, std::map<long long, int>& table) const {
    return (table.at(address) >= WEAKLY_TAKEN);
}

void TwoBit::print(unsigned long long tableSize) const {
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
