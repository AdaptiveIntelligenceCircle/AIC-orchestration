#include <stdio.h>
#include <string.h>

#include "hitl_interface.h"
#include "intervention_router.h"

#include "../review/incident_review.h"

int main()
{
    printf("Single Node - starting Adaptive OS Simulation\n"); 

    // simulate runtime anomaly.. 
    simulate_anomaly(); 

    printf("Single Node - Simulation completed\n"); 

    return 0; 
}