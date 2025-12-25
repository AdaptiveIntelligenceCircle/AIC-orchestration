#include "message_dispatcher.h"
#include "protocol/control_message.h"

using namespace std; 

MessageDispatcher :: MessageDispatcher(RuntimeContext *ctx) : ctx_(ctx){}

void MessageDispatcher :: dispatch(const ProtocolMessage &msg)
{
    if (msg.type == ProtocolMessageType :: CONTROL)
    {
        auto &control_msg = 
        static_cast<const ProtocolMessage&>(msg); 

        // ctx_ -> control->handle(control_msg); 
    }
}