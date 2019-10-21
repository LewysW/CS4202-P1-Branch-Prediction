#include "branch.h"

const std::string &Branch::getAddress() const {
    return address;
}

bool Branch::isTaken() const {
    return taken;
}

Branch::Branch(const std::string &address, bool taken) : address(address), taken(taken) {}
