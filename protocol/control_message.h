#pragma once 
#include <string> 
using namespace std ;

enum class OrchestrationEvent
{
    NODE_START, 
    NODE_FAILURE, 
    POLICY_VIOLATION, 
    ROLLBACK_TRIGGERED
}; 

struct OrchestratinMessage
{
    OrchestrationEvent event; 
    string source; 
    string payload; 
}; 