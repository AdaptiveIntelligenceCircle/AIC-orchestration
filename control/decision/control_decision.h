#include <iostream> 
using namespace std; 

enum class DecisionType
{
    ALLOW, 
    DENY, 
    REQUIRE_CONFIRMATION, 
    ROLLBACK,
    FREEZE_NODE
}; 

struct ControlDecision
{
    DecisionType type; 
    string reason;  
}; 