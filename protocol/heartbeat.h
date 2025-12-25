#pragma once 
#include "message.h"

struct HearbeatMessage : public ProtocolMessage
{
    bool healthy; 
};