#pragma once 
#include "node_registry.h"

#include "system_state.h"
#include "event_bus.h"

#include <iostream> 
using namespace std; 

struct CoreContext
{
    NodeRegistry node_registry; 
    SystemState system_state; 
    EventBus event_bus; 
}; 