#include "control_policy.h"

using namespace std; 

bool ControlPolicy :: isAllowed(const ControlEvent &, 
const AuthorityModel &) const 
{
    // MVP : always true//
    // future : lua / Json policy.. 
    return true; 
}