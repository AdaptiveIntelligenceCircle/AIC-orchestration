# Control Actions

ControlActions are the only mechanism by which AIC–orchestration influences the system.

They are **explicit, auditable, and reversible**.

---

## 1. What is a ControlAction?

A ControlAction represents an **intentional intervention**, not an automatic reaction.

Examples:
- IsolateNode
- RollbackState
- ReducePrivilege
- RequireHumanApproval

---

## 2. Properties of ControlActions

Every ControlAction must be:
- Explicitly typed
- Logged
- Associated with a StateSnapshot
- Traceable to a decision rationale

---

## 3. Why Not Implicit Actions?

Implicit behavior leads to:
- Untraceable failures
- Silent policy drift
- Unsafe automation

AIC rejects implicit control.

---

## 4. Human-Gated Actions

Certain ControlActions:
- Cannot be auto-approved
- Require human confirmation
- Are intentionally slow

This is a **feature**, not a limitation.

---

## 5. Design Constraint

If an action cannot be explained, it must not be executed.

