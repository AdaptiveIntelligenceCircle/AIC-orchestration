#pragma once 
#include <iostream> 
#include "control_decision.h"
#include "../events/control_event.h"
#include <vector> 

using namespace std; 

class ConflictResolver
{
    public: 
    ControlDecision resolve(const ControlEvent &event, 
    const vector<ControlDecision> &candidates); 
}; 