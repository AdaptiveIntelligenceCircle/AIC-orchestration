#pragma once 
#include "node.h"

#include <unordered_map>
using namespace std; 

class NodeRegistry
{
    public: 
    bool registerNode(const Node &node); 
    bool removeNode(const NodeID &id);
    
    Node *getNode(const NodeID &id); 
    const unordered_map<uint64_t, Node> &all() const; 

    private: 
    unordered_map<uint64_t, Node> nodes_; 
};