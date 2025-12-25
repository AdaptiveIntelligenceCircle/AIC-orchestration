#pragma once 
#include "../protocol/message.h"
#include "runtime_context.h"
using namespace std; 

class MessageDispatcher
{
    public: 
    explicit MessageDispatcher(RuntimeContext *ctx); 
    void dispatch(const ProtocolMessage &msg); 

    private: 
    RuntimeContext *ctx_; 
}; 