#pragma once 
#include "message.h"

using namespace std; 

class ProtocolValidator
{
    public: 
    ProtocolStatus validate(const ProtocolMessage &msg) const; 
}; 