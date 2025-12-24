#pragma once 
#include <string> 

#include "node_id.h"

#include <iostream> 
using namespace std;

enum class NodeStatus
{
    INIT, 
    ACTIVE, 
    FROZEN, 
    ISOLATED, 
    TERMINATED
}; 

struct Node
{
    NodeID id; 
    NodeStatus status; 
}; 