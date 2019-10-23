#include <bitset>
#include "twoBit.h"

TwoBit::TwoBit(std::shared_ptr<std::vector<Branch>> &branches) : Predictor(branches) {}

void TwoBit::simulate(int tableSize) {
    double correct = 0;
    std::map<long long, int> table;
    unsigned int addressLen = static_cast<unsigned int>(log2(tableSize));

    for (unsigned int i = 0; i < getBranches()->size(); i++) {
        Branch b = getBranches()->at(i);

        std::string binary = std::bitset<32>(std::stoll(b.getAddress())).to_string();
        long long address = std::stoll(binary.substr(binary.length() - addressLen, addressLen));

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
    return (table.at(address) > WEAKLY_TAKEN);
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