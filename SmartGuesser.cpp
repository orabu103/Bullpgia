#include "SmartGuesser.hpp"
#include <stdlib.h>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
using std::string;


std::string SmartGuesser::guess() {
	std::string r="";
	if(index<=10){
	for (uint i=0; i<this->length; ++i) {
		char c = '0' + index;
		r+= c;
		}
		if(this->_guess != "0,0" && this->_guess!=""){
			for (int j = 0; j < std::stoi(this->_guess.substr(0,1)) ; j++)
			{
				ans[index-1] += 1;
			}
		}
	}
	if(index==10){
		temp = "";
	for (size_t i = 0; i <10; i++)
	{
		if(ans[i]>0){
			for (size_t j = 0; j < ans[i]; j++)
			{
					char c = '0' + i;
					temp+= c;
			}
		}
		
	}
	// cout << "temp " <<temp << endl;
	}
	if(index >= 10){
			std::next_permutation(temp.begin(), temp.end());
	 		r=temp;
	}
	index++;
	return r;
}
