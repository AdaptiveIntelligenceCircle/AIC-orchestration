#include <iostream>
using namespace std; 
#include "../authority/trust_level.h"
#include "../core/node_id.h"
#include "../core/state_snapshot.h"

class AuthorityModel
{
    public: 
    TrustLevel trustLevelOf(NodeID node) const; 

    bool hasPermission(NodeID node, 
    const ControlAction &action) const; 
}; 