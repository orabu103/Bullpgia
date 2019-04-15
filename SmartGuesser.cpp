#include "SmartGuesser.hpp"
#include <stdlib.h>
#include <string>
using std::string;


std::string SmartGuesser::guess() {
	std::string r="";
	for (uint i=0; i<this->length; ++i) {
		char c = '0' + (rand()%10);
		r += c;
	}
	return r;
}