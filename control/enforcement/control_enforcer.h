#include <iostream> 
using namespace std; 
#include "../decision/control_decision.h"
#include "../events/control_event.h"

class ControlEnforcer
{
    public: 
    void apply(const ControlDecision &decision, 
    const ControlEvent &event); 
}; 