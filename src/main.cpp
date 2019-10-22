#include "branch.h"
#include "predictor.h"
#include "alwaysTaken.h"
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

int main(int argc, char* argv[]) {
    if (argc > 2) {
        std::string fileName = std::string(argv[1]);
        std::vector<std::string> opts = getOptions(argc, argv);

        std::vector<Branch> branches = readFile(fileName);
        AlwaysTaken alwaysTaken(branches);

        for (const std::string& opt : opts) {
            switch (opt[1]) {
                case 'a':
                    alwaysTaken.simulate();
                    alwaysTaken.print();
                    break;
                case 'b':

                    break;
                case 'g':

                    break;
                case 'p':

                    break;
                default:
                    break;
            }
        }
    } else {
        printUsage();
    }
    return 0;
}

std::vector<std::string> getOptions(int argc, char* argv[]) {
    std::vector<std::string> opts;
    std::set<std::string> valid = {"-a", "-b", "-g", "-p"};

    for (int opt = 2; opt < argc; opt++)
        if (valid.find(argv[opt]) != valid.end()) {
            opts.emplace_back(std::string(argv[opt]));
        } else {
            std::cout << "predictor: invalid option -- '" << argv[opt] << "'" << std::endl;
            printUsage();
            exit(1);
        }

    return opts;
}

void printUsage() {
    std::cout << "Usage: ./predictor <filename> <option>" << std::endl;
    std::cout << "Options:" << std::endl;
    std::cout << "'-a' Always Taken" << std::endl;
    std::cout << "'-b' standard 2-bit predictor" << std::endl;
    std::cout << "'-g' gshare" << std::endl;
    std::cout << "'-p' Profiled approach" << std::endl;
}

std::vector<Branch> readFile(std::string const& file) {
    std::ifstream inputFile;
    inputFile.open(file);

    if (!inputFile) {
        std::cout << "File " << file << " failed to open" << std::endl;
        exit(1);
    }

    return parseLines(inputFile);
}

//BEGIN CITATION
//Code for tokenizing file: https://stackoverflow.com/questions/42444556/reading-file-line-by-line-and-tokenizing-lines
std::vector<Branch> parseLines(std::ifstream& ifstream){
    std::string line;
    bool isAddress = true;
    std::string address;
    bool isTaken;
    std::vector<Branch> branches;

    std::vector<int> r;
    while(getline(ifstream, line)) {
        std::stringstream ss(line);
        std::string token;
        while (std::getline(ss, token, ' ')){

            if (isAddress) {
                address = token;
            } else {
                isTaken = static_cast<bool>(std::stoi(token));
                branches.emplace_back(Branch(address, isTaken));
            }

            isAddress = !isAddress;
        }
    }

    return branches;
}
//END CITATION