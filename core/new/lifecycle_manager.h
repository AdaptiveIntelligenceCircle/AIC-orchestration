#pragma once 
#include "node_registry.h"

using namespace std; 

class LifeCycleManager
{
    public: 
    bool transition(NodeID id, NodeStatus next); 

    private: 
    NodeRegistry *registry_{nullptr}; 
}; 