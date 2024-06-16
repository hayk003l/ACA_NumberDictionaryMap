#include "NumberDictionary.hpp"

std::string numsDictionary(const std::map<int, std::string>& numMap, const int& num) {
    for (const auto& elem : numMap) {
        if (num == elem.first) {
            return elem.second;
        }
    }
    return "None";
};
