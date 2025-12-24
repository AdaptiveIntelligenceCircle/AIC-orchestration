#pragma once 
#include <string> 

#include <unordered_map>
using namespace std; 

class SystemState
{
    public: 
    void set(const string &k, const string &v); 
    string get(const string &k) const; 

    private: 
    unordered_map<string, string> state_; 
}; 