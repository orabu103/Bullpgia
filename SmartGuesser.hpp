
#pragma once
#include "Guesser.hpp"
using std::string;

/**

 * SmartGuesser is a guesser that always smart

 */
class SmartGuesser: public bullpgia::Guesser {
		string myConstantString;
	public:
		SmartGuesser() = default;
		SmartGuesser(const string& constantString) { myConstantString = constantString; }
		string guess() override;

};