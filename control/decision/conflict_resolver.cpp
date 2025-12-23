#include "conflict_resolver.h"

using namespace std; 

ControlDecision ConflictResolver :: resolve(
    const ControlEvent&, 
    const vector<ControlDecision> &decisions
)
{
    for (const auto &d : decisions)
    {
        if (d.type == DecisionType :: DENY)
        return d; 
    }
    return {
        DecisionType ::ALLOW, "No Conflict"
    }; 
}