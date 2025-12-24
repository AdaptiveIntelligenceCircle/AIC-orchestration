#include "lifecycle_manager.h"
using namespace std ; 

bool LifeCycleManager :: transition(NodeID id, NodeStatus next) 
{
    auto* node = registry_->getNode(id);
    if (!node) return false;

    node->status = next;
    return true;
}