#pragma once 
#include "core_context.h" 

#include "control_manager.h"
using namespace std; 

struct RuntimeContext
{
    CoreContext *core; 
    ControlManager *control;
}; 