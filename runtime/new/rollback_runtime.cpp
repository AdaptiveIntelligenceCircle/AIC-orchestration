#include "rollback_runtime.h"

RollbackRuntime::RollbackRuntime(RuntimeContext* ctx)
    : ctx_(ctx) {}

bool RollbackRuntime::rollback(const NodeID& target) {
    // Giả lập: gọi rollback engine
    // ctx_->control->rollbackEngine().rollback(...)
    return true;
}
