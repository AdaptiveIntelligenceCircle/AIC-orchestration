#pragma once
#include "runtime_context.h"

class RollbackRuntime {
public:
    explicit RollbackRuntime(RuntimeContext* ctx);

    bool rollback(const NodeID& target);

private:
    RuntimeContext* ctx_;
};
