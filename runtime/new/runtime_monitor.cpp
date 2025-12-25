#include "runtime_monitor.h"
#include <iostream>

void RuntimeMonitor::observe(const NodeID& node) 
{
    std::cout << "[RUNTIME] Observing node "
              << node.uid << "\n";
}
