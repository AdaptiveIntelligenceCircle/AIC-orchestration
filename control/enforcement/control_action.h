#pragma once 
#include <variant>
#include <string> 

using namespace std; 

enum class NodeActionType
{
    START, 
    STOP,
    RESTART, 
    FREEZE
}; 

enum class StateActionType {
    SNAPSHOT,
    ROLLBACK,
    PURGE_STATE
};

enum class AuthorityActionType {
    PROMOTE,
    DEMOTE,
    ISOLATE,
    REVOKE
};

enum class BehaviorActionType {
    LIMIT,
    SANDBOX,
    OVERRIDE_POLICY
};


enum class ControlDomain
{
    NODE, 
    STATE, 
    AUTHORITY, 
    BEHAVIOR
}; 

struct ControlAction
{
    ControlDomain domain; 
    variant<
       NodeActionType,
       StateActionType,
       AuthorityActionType,
       BehaviorActionType
    > action;

    string reason;
}; 