#pragma once 
#include <string> 
#include <chrono> 
#include <unordered_map>
using namespace std; 

struct StateSnapshot
{
    string snapshot_id; 

    chrono :: system_clock :: time_point timestamp; 

    // trang thai logic .. 
    unordered_map<string, string> state_kv ;

    // hash toan bo snapshot (chong gia mao).. 
    string intergrity_hash; 
}; 