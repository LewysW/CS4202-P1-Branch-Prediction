#include <bitset>
#include "GShare.h"

GShare::GShare(std::shared_ptr<std::vector<Branch>> &branches) : Predictor(branches) {}

/**
 * Keeps a store of global and local (bimodal) history, XORs these values, and uses the lower bits of
 * this value as an index into a table containing the prediction for the current branch
 * @param tableSize
 */
void GShare::simulate(unsigned long long tableSize) {
    double correct = 0;
    double incorrect = 0;

    //Stores list of address indexes and taken/not taken
    std::map<long long, int> table;

    //Determines address length based on table size (e.g. table size of
    // 4096 has an address length of 9, i.e. 2^9 = 4096)
    auto addressLen = static_cast<unsigned int>(log2l(tableSize));

    //Stores longest value that can be stored in address (all 1s of length 'addressLen')
    long long bitMask = (1 << addressLen) - 1;

    //Stores local history
    long long PC;

    //Stores global history
    long long GR = (1 << addressLen) - 1;

    //Stores XORED value
    long long address;

    //Iterates through each branch in list
    for (unsigned long i = 0; i < getBranches()->size(); i++) {
        Branch b = getBranches()->at(i);
        //Gets least significant n bits of program counter of local instruction
        PC = bitMask & std::stoll(b.getAddress());
        //Gets gshare address of value in table by combining global register value and local pc address
        address = GR ^ PC;

        if (table.find(address) == table.end()) {
            table.insert(std::pair<long long, int>(address, WEAKLY_TAKEN));
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
    }

    setRate(correct / getBranches()->size());
}

/**
 * If value in table is weakly or strongly taken, return true
 * @param address - index into table
 * @param table - table storing taken/not taken
 * @return whether value in table is taken/not taken
 */
bool GShare::isTaken(long address, std::map<long long, int> &table) const {
    return (table.at(address) >= WEAKLY_TAKEN);
}

/**
 * Prints out result of the simluation for gshare
 * @param tableSize - size of table to index into
 */
void GShare::print(unsigned long long tableSize) {
    std::cout << "gshare" << std::endl;
    std::cout << "--------------------------" << std::endl;
    std::cout << "Table Size: " << tableSize << std::endl;
    Predictor::print();
}

bool GShare::isTaken(Branch b) const {return false;}

void GShare::simulate() {}