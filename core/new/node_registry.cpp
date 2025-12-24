#include "node_registry.h"
using namespace std; 

bool NodeRegistry :: registerNode(const Node &node)
{
    return nodes_.emplace(node.id.uid, node).second; 
}

bool NodeRegistry :: removeNode(const NodeID &id)
{
    return nodes_.erase(id.uid) > 0; 
}

Node * NodeRegistry :: getNode(const NodeID &id)
{
    auto it = nodes_.find(id.uid); 
    return it != nodes_.end() ? &it -> second : nullptr; 
}

const unordered_map<uint64_t, Node> &NodeRegistry :: all() const 
{
    return nodes_; 
}