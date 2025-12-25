#pragma once 
#include "../enforcement/control_action.h"
#include "runtime_context.h"

#include <iostream>
using namespace std;

class ActionExecutor
{
    public: 
    explicit ActionExecutor(RuntimeContext *ctx); 

    bool execute(const ControlAction &action, const NodeID &target); 

    private: 
    RuntimeContext *ctx_; 
}; 
