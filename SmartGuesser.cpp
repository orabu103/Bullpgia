#include "SmartGuesser.hpp"
#include <stdlib.h>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
using std::string;


std::string SmartGuesser::guess() {
	std::string r="";
	if(index<=10 && count <this->length){
		for (uint i=0; i<this->length; ++i) {
			char c = '0' + index;
			r+= c;
		}
		if(this->_guess != "0,0" && this->_guess!="" && index >0){
			for (int j = 0; j < std::stoi(this->_guess.substr(0,1)) ; j++)
			{
				ans[index-1] += 1;
				count ++;
			}
		}
	}
	// if index==10 input all number in array to string temp
	if(count ==this->length){
	count++;
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
		r=temp;
	}



	
	// Algorithm --> for all permutation in string
	if(count==(this->length+1)){
		std::next_permutation(temp.begin(), temp.end());
	 	r=temp;
	}
	// if(count >0 && count <9)
	index++;
	return r;
}
