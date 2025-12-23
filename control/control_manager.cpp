#include "control_manager.h"
using namespace std; 

ControlDecision ControlManager :: evaluate(const ControlEvent &event)
{
    if (!policy_.isAllowed(event, authority_))
    {
        return {
            DecisionType :: DENY, "Policy denied"
        }; 
    }

    auto trust = authority_.trustLevelOf(event); 
    if (trust == TrustLevel :: UNTRUSTED)
    {
        return {
            DecisionType :: FREEZE_NODE, "Untrusted node"
        }; 
    }
    return {
        DecisionType ::ALLOW , "Allowed"
    } ;
}

void ControlManager :: enforce(const ControlDecision &decision)
{
   //  enforcer_.apply(decision); 
}

