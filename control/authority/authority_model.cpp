#include "authority_model.h"
#include "trust_level.h"
using namespace std; 

TrustLevel AuthorityModel :: trustLevelOf(NodeID node) const 
{
    // prototype : hard-coded .. 
    if (node.role == "core")
    return TrustLevel :: ROOT; 

    return TrustLevel :: NORMAL; 
}

bool AuthorityModel :: hasPermission(NodeID node, 
const ControlAction &) const 
{
    return trustLevelOf (node) >= TrustLevel :: NORMAL; 
}