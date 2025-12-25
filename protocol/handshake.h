#pragma once 
#include "message.h"
#include <string> 

struct HandshakeMessage : public ProtocolMessage
{
    string capability_hash ; 
}; 