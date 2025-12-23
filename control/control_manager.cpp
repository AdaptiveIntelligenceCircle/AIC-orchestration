#include "control_manager.h"
#include "../enforcement/control_action.h"
using namespace std; 

ControlDecision ControlManager :: evaluate(const ControlEvent &event)
{
    if (!policy_.isAllowed(event, authority_))
    {
        return {
            DecisionType :: DENY, "Policy denied"
        }; 
    }

    // auto trust = authority_.trustLevelOf(event);  
    // if (trust == TrustLevel :: UNTRUSTED)
    // {
    //     return {
    //         DecisionType :: FREEZE_NODE, "Untrusted node"
    //     }; 
    // }
    // return {
    //     DecisionType ::ALLOW , "Allowed"
    // } ;

    // if (!authority_.hasPermission(event.source,
    //                               event.action)) {
    //     return {
    //         DecisionType::DENY,
    //         "Permission denied"
    //     };
    // }

    if (!policy_.isAllowed(event, authority_)) {
        return {
            DecisionType::DENY,
            "Policy violation"
        };
    }

    return {
        DecisionType::ALLOW,
        "Approved"
    };
}

void ControlManager :: enforce(const ControlDecision &decision)
{
   //  enforcer_.apply(decision); 
}

