#ifndef GUESSER_HPP

#define GUESSER_HPP

#include <iostream>
#include "calculate.hpp"
#include <string.h>
#include <vector> 
namespace bullpgia {
class Guesser {

public:
    int index;
    vector<int> history;
    string temp="";
    int count = 0;
    unsigned int length;
    std::string _guess;
    int ans[10];
    virtual std::string guess() = 0;
    void learn(std::string _guess) { this->_guess = _guess; }
    void startNewGame(unsigned int length) {
    this->length = length; index = 0;count =0; 
    memset(ans, 0, sizeof(ans));  

    }
};
}
#endif
