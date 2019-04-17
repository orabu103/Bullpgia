#ifndef GUESSER_HPP

#define GUESSER_HPP

#include <iostream>
#include "calculate.hpp"

namespace bullpgia {
class Guesser {

public:
    int index;
    string temp="";
    unsigned int length;
    std::string _guess;
    int ans[10];
    virtual std::string guess() = 0;
    void learn(std::string _guess) { this->_guess = _guess; }
    void startNewGame(unsigned int length) {this->length = length; index = 0;  
    for (size_t i = 0; i < 10; i++)
    {
        ans[i]=0;
    }
    
    }


};

}
#endif
