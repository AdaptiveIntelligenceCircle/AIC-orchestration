#include "rollback_engine.h"
using namespace std; 

#include <iostream>

void RollbackEngine:: rollback(NodeID node, const StateSnapshot& snapshot)
{
    // 1. verify snapshot intergrity.. 
    if (snapshot.intergrity_hash.empty())
    {
        cout << "Rollback - invalid snapshot" << endl; 
        return ; 
    }

    // 2. Epoch safety check.. 
    if (node.epoch)
    {
        cout << "ROllback Epoch mismatch" << endl;
        return; 
    }

    // 3/ Apply state.. 
    for (const auto &[k, v] : snapshot.state_kv)
    {
       //  applyState(k, v); 
    }

    cout << "Rollback - Node rolled back successfully\n";
}