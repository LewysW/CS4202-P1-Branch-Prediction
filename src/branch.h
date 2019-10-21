#pragma once


#include <string>

class Branch {
private:
    std::string address;
    bool taken;

public:
    Branch(const std::string &address, bool taken);

    const std::string &getAddress() const;

    bool isTaken() const;
};


