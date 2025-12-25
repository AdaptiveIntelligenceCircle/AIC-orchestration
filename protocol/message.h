#pragma once 
#include "protocol_types.h"
#include "../control/core/node_id.h"
#include <chrono>

using namespace std; 

struct ProtocolMessage
{
    ProtocolMessageType type; 
    NodeID sender; 
    chrono :: system_clock :: time_point timestamp; 
}; 