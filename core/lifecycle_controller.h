#pragma once 

enum class LifecycleState 
{
    INIT, // initialized state
    RUNNING, 
    PAUSED, 
    STOPPING, 
    STOPPED 
};

class LifecycleController
{
    public: 
    void transition(LifecycleController next); 
    LifecycleState current() const; 

    private: 
    LifecycleState state = LifecycleState :: INIT;
};