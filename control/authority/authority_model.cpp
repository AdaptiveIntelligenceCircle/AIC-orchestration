#include "authority_model.h"
#include "trust_level.h"

#include "../enforcement/control_action.h"
using namespace std; 

TrustLevel AuthorityModel :: trustLevelOf(NodeID node) const 
{
    // prototype : hard-coded .. 
    if (node.role == "core")
    return TrustLevel :: ROOT; 

    return TrustLevel :: NORMAL; 
}

bool AuthorityModel :: hasPermission(NodeID node, 
const ControlAction &action) const 
{
    // return trustLevelOf (node) >= TrustLevel :: NORMAL; 

    auto trust = trustLevelOf(node);

    switch (action.domain) {

    case ControlDomain::NODE:
        return trust >= TrustLevel::NORMAL;

    case ControlDomain::STATE:
        return trust >= TrustLevel::NORMAL;

    case ControlDomain::AUTHORITY:
        return trust >= TrustLevel::ROOT;

    case ControlDomain::BEHAVIOR:
        return trust >= TrustLevel::ROOT;
    }

    return false;
}