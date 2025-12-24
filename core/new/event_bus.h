#pragma once 
#include <functional> 

#include <vector> 
using namespace std; 

using EventHandler  = function<void()>; 

class EventBus
{
    public: 
    void subscribe(EventHandler handler); 
    void emit(); 

    private: 
    vector<EventHandler> handlers_; 
}; 