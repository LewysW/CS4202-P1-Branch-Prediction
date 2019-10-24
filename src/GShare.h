#pragma once


#include <memory>
#include "predictor.h"

class GShare : Predictor {
public:
    explicit GShare(std::shared_ptr<std::vector<Branch>> &branches);
};


