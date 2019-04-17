
#include "calculate.hpp"
#include <iostream>
using namespace std;


std::string calculateBullAndPgia(std::string s, std::string t) {
    int bull=0;
    int pgia=0;
    string ans ="";
    string temp = t;

    if(s.compare(t)==0){
        return "4,0";
    }
    else {
        for (int i = 0; i < s.length(); i++)
        {
            if(s.at(i)==temp.at(i)){
                    bull++;
                }
            else{
                for (int j = 0; j < t.length(); j++)
                {
                    if(s.at(i)==temp.at(j) && s.at(j)!=temp.at(j))
                    {
                        pgia++;
                        temp.at(j)='x';
                    }
                }
            }
        }
        ans+=std::to_string(bull)+","+std::to_string(pgia);
        // cout << ans << endl;

        return ans;
    }
}
