#include "protocol_validator.h"
#include <chrono> 

using namespace std; 

ProtocolStatus ProtocolValidator :: validate(
    const ProtocolMessage &msg
) const 
{
    auto now = chrono :: system_clock::now(); 
    if (now - msg.timestamp > chrono :: seconds(10))
    return ProtocolStatus :: EXPIRED; 

    return ProtocolStatus :: OK; 
}
