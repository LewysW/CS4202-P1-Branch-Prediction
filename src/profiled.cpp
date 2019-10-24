#include "profiled.h"
#include "predictor.h"

bool Profiled::isTaken(Branch b) const {
    return false;
}

void Profiled::simulate() {
    //TODO choose gshare if number of unique addresses is low relative to total number of addresses (implies high ILP),
    //TODO choose 2-bit predictor otherwise
}

Profiled::Profiled(std::shared_ptr<std::vector<Branch>> &branches) : Predictor(branches)
{
}

void Profiled::print() {

}
