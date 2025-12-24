#include "event_bus.h"

void EventBus::subscribe(EventHandler handler) 
{
    handlers_.push_back(handler);
}

void EventBus::emit() 
{
    for (auto& h : handlers_)
        h();
}
