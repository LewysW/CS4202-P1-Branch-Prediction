#include <bitset>
#include "GShare.h"

GShare::GShare(std::shared_ptr<std::vector<Branch>> &branches) : Predictor(branches) {}

void GShare::simulate(unsigned long long tableSize) {
    double correct = 0;
    double incorrect = 0;
    std::map<long long, int> table;
    auto addressLen = static_cast<unsigned int>(log2l(tableSize));
    long long bitMask = (1 << addressLen) - 1;;
    long long PC;
    long long GR = (1 << addressLen) - 1;
    long long address;

    //Iterates through each branch in list
    for (unsigned long i = 0; i < getBranches()->size(); i++) {
        Branch b = getBranches()->at(i);
        //Gets least significant n bits of program counter of local instruction
        PC = bitMask & std::stoll(b.getAddress());
        //Gets gshare address of value in table by combining global register value and local pc address
        address = GR ^ PC;

        if (table.find(address) == table.end()) {
            table.insert(std::pair<long long, int>(address, STRONGLY_TAKEN));
        }

        //If prediction matches actual value, increment correct
        if (isTaken(address, table) == b.isTaken()) {
            //Increment correct predictions
            correct++;
            GR <<= 1;
            GR &= bitMask;
            GR ^= 1;
        } else {
            GR <<= 1;
            GR &= bitMask;
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

        /*std::bitset<32> bitset(GR);
        std::cout << "GR: " << bitset << std::endl;
        std::bitset<32> bitset1(PC);
        std::cout << "PC: " << bitset1 << std::endl;*/
    }

    std::cout << "Table size: " << table.size() << std::endl;
    setRate(correct / getBranches()->size());
}

bool GShare::isTaken(long address, std::map<long long, int> &table) const {
    return (table.at(address) >= WEAKLY_TAKEN);
}

void GShare::print(unsigned long long tableSize) const {
    std::cout << "gshare" << std::endl;
    std::cout << "--------------------------" << std::endl;
    std::cout << "Table Size: " << tableSize << std::endl;
    Predictor::print();
}

bool GShare::isTaken(Branch b) const {return false;}

void GShare::simulate() {}