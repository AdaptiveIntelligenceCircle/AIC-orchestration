# Rollback Model

Rollback is a foundational architectural concept in AIC–orchestration.

It is not an error-handling mechanism.
It is a **temporal control mechanism**.

---

## 1. Why Rollback Is Central

Adaptive systems evolve.
Evolution implies mistakes.

Rollback exists to:
- Reverse unsafe evolution
- Preserve causal history
- Enable forensic analysis

---

## 2. Rollback vs Restart

| Rollback | Restart |
|--------|---------|
| State-aware | State-blind |
| Causal | Reactive |
| Auditable | Ephemeral |
| Intentional | Mechanical |

Restart hides failure.
Rollback exposes it.

---

## 3. Rollback Scope

Rollback may apply to:

- Individual nodes
- Control decisions
- Trust adjustments
- System-wide states

Scope is explicitly defined per rollback.

---

## 4. Temporal Reasoning

Rollback requires reasoning about:
- When a decision was made
- What information was available
- What assumptions were violated

This makes rollback a **control decision**, not a technical fix.

---

## 5. Design Constraint

Rollback must always be:
- Explicit
- Logged
- Explainable
- Reversible again if needed

