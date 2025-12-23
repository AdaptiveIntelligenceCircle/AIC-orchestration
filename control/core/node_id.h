#pragma once 
#include <string> 

#include <cstdint>
using namespace std; 

struct NodeID
{
    uint64_t uid; // dinh danh duy nhat trong cluster.. 
    uint64_t epoch; // the he node(restart = epoch ++)
    string role; // core / worker / observer.. 
}; 