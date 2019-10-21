#include "branch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

std::vector<Branch> parseLines(std::ifstream& myfile);
std::vector<Branch> readFile(std::string const& file);

int main(int argc, char* argv[]) {
    if (argc > 1) {
        std::string fileName = std::string(argv[1]);
        std::vector<Branch> branches = readFile(fileName);

        for (const Branch& b : branches) {
            std::cout << b.getAddress() << " " << b.isTaken() << std::endl;
        }
    }
    return 0;
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
std::vector<Branch> parseLines(std::ifstream& myfile){
    std::string line;
    bool isAddress = true;
    std::string address;
    bool isTaken;
    std::vector<Branch> branches;

    std::vector<int> r;
    while(getline(myfile, line)) {
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