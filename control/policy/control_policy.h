#pragma once 
#include <iostream> 

using namespace std; 
#include "../events/control_event.h"

#include "../authority/authority_model.h"

class ControlPolicy
{
    public: 
    bool isAllowed(const ControlEvent &event, 
    const AuthorityModel &authority) const; 

    // PolicyRuleSet applicableRules(const ControlEvent &event) const; 
}; 