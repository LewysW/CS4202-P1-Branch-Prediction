#pragma once

#include "branch.h"
#include "predictor.h"
#include "alwaysTaken.h"
#include "twoBit.h"
#include "GShare.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <set>

std::vector<std::string> getOptions(int argc, char* argv[]);
std::vector<Branch> parseLines(std::ifstream& ifstream);
std::vector<Branch> readFile(std::string const& file);
void printUsage();