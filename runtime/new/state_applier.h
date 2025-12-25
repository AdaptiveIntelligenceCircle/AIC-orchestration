#pragma once
#include "state_snapshot.h"

class StateApplier 
{
public:
    bool apply(const StateSnapshot& snapshot);
};
