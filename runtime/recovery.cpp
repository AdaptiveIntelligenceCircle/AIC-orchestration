#include "control/rollback_controller.h"

void recoverSystem() 
{
    RollbackController rb;
    rb.restoreLastStableState();
}
