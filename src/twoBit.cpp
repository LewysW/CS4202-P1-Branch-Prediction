#include <bitset>
#include "twoBit.h"

TwoBit::TwoBit(std::shared_ptr<std::vector<Branch>> &branches) : Predictor(branches) {}

void TwoBit::simulate(int tableSize) {
    double correct = 0;
    std::map<long long, int> table;
    auto addressLen = static_cast<unsigned int>(log2(tableSize));
    unsigned long long bits;
    long long address;

    for (unsigned int i = 0; i < getBranches()->size(); i++) {
        Branch b = getBranches()->at(i);

        bits = ((unsigned long long)1 << addressLen) - 1;
        address = bits & std::stoll(b.getAddress().substr(b.getAddress().length() - addressLen, addressLen));

        if (table.find(address) == table.end())
            table.insert(std::pair<long long, int>(address, STRONGLY_TAKEN));

        if (isTaken(address, table) == b.isTaken()) {
            correct++;
            if (table.at(address) < STRONGLY_TAKEN) {
                table[address]++;
            }
        } else {
            if (table.at(address) > STRONGLY_NOT_TAKEN) {
                table[address]--;
            }
        }
    }

    std::cout << "Table size:" << table.size() << std::endl;

    setRate(correct / getBranches()->size());
}

bool TwoBit::isTaken(long address, std::map<long long, int>& table) const {
    return (table.at(address) >= WEAKLY_TAKEN);
}

void TwoBit::print(int tableSize) const {
    std::cout << "TwoBit" << std::endl;
    std::cout << "Table Size: " << tableSize << std::endl;
    std::cout << "--------------------------" << std::endl;
    Predictor::print();
}

bool TwoBit::isTaken(Branch b) const {
    return false;
}

void TwoBit::simulate() {

}
