#pragma once 

class RollbackController
{
    public: 
    void triggerRollback(const char *reason);
    void restoreLastStableState(); 
}; 