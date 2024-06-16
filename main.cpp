#include <iostream>

#include "NumberDictionary.hpp"

int main() {
    std::map<int, std::string> numMap = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}, {10, "Ten"}};
    int num = 1;

    std::cout << numsDictionary(numMap, num) << std::endl;
    return 0;
}