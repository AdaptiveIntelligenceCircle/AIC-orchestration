#include "action_executor.h"
#include "rollback_runtime.h"
using namespace std; 

ActionExecutor::ActionExecutor(RuntimeContext* ctx)
    : ctx_(ctx) {}

bool ActionExecutor::execute(const ControlAction& action,
                             const NodeID& target) {

    switch (action.domain) {

    case ControlDomain::NODE:
        ctx_->core->node_registry
            .getNode(target)->status = NodeStatus::FROZEN;
        return true;

    case ControlDomain::STATE:
        if (std::holds_alternative<StateActionType>(action.action)) {
            auto type = std::get<StateActionType>(action.action);
            if (type == StateActionType::ROLLBACK) {
                RollbackRuntime rb(ctx_);
                return rb.rollback(target);
            }
        }
        break;

    default:
        break;
    }
    return false;
}

