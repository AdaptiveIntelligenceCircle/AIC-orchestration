#include <iostream>
using namespace std; 
#include "../authority/trust_level.h"

class AuthorityModel
{
    public: 
    TrustLevel trustLevelOf(/*NodeID node*/) const; 

    bool hasPermission(/*NodeID node, 
    const ControlAction &action*/) const; 
}; 