#pragma once 

#include "node_manager.h"
#include "lifecycle_controller.h"

class Orchestrator 
{
    public: 
    bool initialize(); 
    void start(); 
    void monitor(); 
    void shutdown(); 

    private: 
    NodeManager nodeManager; 
    LifecycleController lifecycle; 
}; 