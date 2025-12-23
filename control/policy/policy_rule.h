#pragma once 
using namespace std; 

#include <iostream>
#include <string> 

#include "../events/control_event.h"

struct PolicyRule
{
    string rule_id; 
    string description; 

    bool evaluate(const ControlEvent &event) const; 
}; 