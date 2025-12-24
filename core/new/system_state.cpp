#include "system_state.h"
using namespace std;

void SystemState :: set(const string &k, const string &v)
{
    state_[k] = v; 
}

string SystemState :: get(const string &k) const 
{
    auto it = state_.find(k); 
    return it != state_.end() ? it -> second : ""; 
}