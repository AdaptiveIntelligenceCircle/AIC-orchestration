# Orchestration Flow Diagram

This diagram illustrates the high-level orchestration flow in AIC.

The flow emphasizes **control before execution** and **state before action**.

---

## 1. High-Level Flow
``` pgsql 

┌────────────┐
│ Observers │
└─────┬──────┘
│ observations
▼
┌───────────────┐
│ State Snapshot│
└─────┬─────────┘
│ immutable state
▼
┌───────────────┐
│ Control Plane │
│ (Decision) │
└─────┬─────────┘
│ ControlAction
▼
┌───────────────┐
│ Data Plane │
│ (Execution) │
└─────┬─────────┘
│ results / feedback
▼
┌───────────────┐
│ Audit & Log │
└───────────────┘

```

---

## 2. Key Properties

- Control Plane never executes directly
- Data Plane never decides
- All decisions are logged
- Feedback is mandatory

---

## 3. Design Insight

This flow ensures:
- Accountability
- Explainability
- Recoverability

At the cost of:
- Latency
- Simplicity

This trade-off is intentional.

