#pragma once
#include "../core/node_id.h"
#include "../core/state_snapshot.h" 
using namespace std; 

class RollbackEngine 
{
public:
    void rollback(NodeID node,
                  const StateSnapshot& snapshot);
};
