# AIC-orchestration
The solution for running AIC through other devices/OS.

-- 

<img width="512" height="512" alt="image" src="https://github.com/user-attachments/assets/50001413-ecb9-4605-a6b3-51f6842903c5" />

## Structure 
```pgsql

AIC-orchestration/
│
├── README.md
│
├── docs/
│   ├── architecture.md
│   ├── lifecycle.md
│   ├── failure-model.md
│   └── security-model.md
│
├── config/
│   ├── node.yaml
│   ├── orchestration.yaml
│   └── policy.yaml
│
├── core/
│   ├── orchestrator.h
│   ├── orchestrator.cpp
│   ├── node_manager.h
│   ├── node_manager.cpp
│   ├── lifecycle_controller.h
│   ├── lifecycle_controller.cpp
│   ├── health_monitor.h
│   ├── health_monitor.cpp
│
├── runtime/
│   ├── launcher.cpp
│   ├── shutdown.cpp
│   └── recovery.cpp
│
├── control/
│   ├── rollback_controller.h
│   ├── rollback_controller.cpp
│   ├── quarantine.cpp
│   └── freeze.cpp
│
├── protocol/
│   ├── orchestration_message.h
│   ├── orchestration_message.cpp
│   └── schema.md
│
├── cli/
│   ├── aicctl.cpp
│   └── commands.md
│
└── examples/
    ├── single-node/
    └── multi-node/
```

## THE ROLE OF AIC-ORCHESTRATION

``` scss 

          ┌─────────────────────────┐
          │     AIC Orchestration   │
          │  (Lifecycle + Control)  │
          └──────────┬──────────────┘
                     │
        ┌────────────┼──────────────┐
        │            │              │
 [AdaptiveOS]     [IBCS]        [AdaptiveAI]
        │            │              │
      [DIP]     (introspection)   (learning)

```

## WHAT IS DIFFERENT THAN ORDINARY ORCHESTRATION ? 

| Kubernetes / DevOps | AIC-orchestration           |
| ------------------- | --------------------------- |
| Scale pods          | Control behavior            |
| Health = alive      | Health = legitimate         |
| Restart on crash    | Rollback on violation       |
| Blind orchestration | Introspective orchestration |

## APPLY 

Put AIC-orchestration into:

+ AdaptiveOS (runtime)

+ IBCS (policy signal)

+ DIP (health signal)

=> Dùng trong:

+ Demo

+ Simulation

+ Evaluation round

+ Mentor review

## IN GENERAL 

> If Adaptive AI is the brain
> IBCS is consciousness
> AdaptiveOS is the body
> then AIC - orchestration is the central nervous system.