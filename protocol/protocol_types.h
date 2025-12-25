#pragma once 

enum class ProtocolMessageType
{
    HANDSHAKE, 
    HEARTBEAT, 
    CONTROL, 
    STATE_SYNC
}; 

enum class ProtocolStatus
{
    OK, 
    REJECTED, 
    INVALID, 
    EXPIRED
}; 