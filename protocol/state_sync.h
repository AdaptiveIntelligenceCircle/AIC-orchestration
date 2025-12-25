#pragma once 
#include "message.h"

#include <unordered_map>
using namespace std;

struct StateSyncMessage : public ProtocolMessage
{
    unordered_map<string, string> delta_state; 
}; 