#include <iostream> 
using namespace std; 

enum class ControlEventType 
{
    NODE_JOIN,
    NODE_LEAVE,
    STATE_UPDATE,
    POLICY_VIOLATION,
    MANUAL_OVERRIDE
};

struct ControlEvent 
{
    ControlEventType type;
    // NodeID source;
    // Payload payload;
};
