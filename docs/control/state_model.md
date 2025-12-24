# State Model and StateSnapshot

State is the primary object of reasoning in AIC–orchestration.

---

## 1. What is State?

State is a structured representation of:
- System conditions
- Node behavior
- Control context
- Risk posture

State is not limited to resource usage or uptime.

---

## 2. StateSnapshot

A **StateSnapshot** is an immutable record capturing:

- Node states
- Control decisions
- Trust levels
- Temporal context

Snapshots are used for:
- Rollback
- Audit
- Causal analysis

---

## 3. Snapshot ≠ Checkpoint

| Snapshot | Traditional Checkpoint |
|-------|----------------------|
| Immutable | Mutable |
| Context-aware | System-only |
| Auditable | Ephemeral |
| Used for reasoning | Used for restart |

---

## 4. Granularity

Snapshots may be:
- Per-node
- Per-control-cycle
- Per-incident

Granularity is a **policy decision**, not an implementation detail.

---

## 5. Design Rule

No control action may be issued without a corresponding StateSnapshot.

