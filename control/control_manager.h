#pragma once 

#include <iostream>
using namespace std; 

#include "../policy/control_policy.h"
#include "../authority/authority_model.h"

#include "../decision/conflict_resolver.h"
#include "../enforcement/control_enforcer.h"

#include "../decision/control_decision.h"
#include "../events/control_event.h"

class ControlManager
{
    public: 
    ControlDecision evaluate(const ControlEvent &event); 

    void enforce(const ControlDecision &decision); 

    private: 
    ControlPolicy policy_; 
    AuthorityModel authority_; 
    ConflictResolver resolver_; 
    ControlEnforcer enforcer_; 
};  