#include <stdio.h>
#include "../hitl/hitl_interface.h"
#include "../intervention/intervention_router.h"

#include "../review/rollback_approval.h"

void simulate_anomaly()
{
    hitl_session_t session; 
    hitl_decision_record_t decision; 
    authority_token_t token; 

    hitl_open_session(HITL_SCOPE_APPROVE, &session); 

    hitl_request_decision(
        &session, 
        "Single-node anomaly detected", 
        &decision, 
        &token
    ); 

    control_context_t ctx; 
    init_control_context(&ctx, CONTROL_CTX_ANOMALY, "single-node");

    route_intervention(
        &token, 
        INTERVENTION_OVERRIDE, 
        &ctx, 
        "pause module before rollback"
    );

    approve_rollback(
        &token, 
        "driver_module" ,
        "Approved rollback on single node"
    ); 

    review_incident
    (
        "SN_INC_001", 
        "single-node false positive anomaly"
    ); 
}