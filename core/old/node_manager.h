#pragma once 
#include <vector> 

#include <string> 
using namespace std ;

struct AICNode
{
    string id; 
    string role; 
    bool healthy; 
}; 

class NodeManager
{
    public: 
    void loadConfig(const string &path); 
    void startNodes(); 
    void stopNodes(); 

    vector<AICNode> getNodes(); 
}; 