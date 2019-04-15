#ifndef GUESSER_HPP

#define GUESSER_HPP

#include <iostream>
#include "calculate.hpp"

namespace bullpgia {
class Guesser {

public:
    unsigned int length;
    std::string _guess;
    virtual std::string guess() = 0;
    void learn(std::string _guess) { this->_guess = _guess; }
    void startNewGame(unsigned int length) { this->length = length; }


};

}
#endif
