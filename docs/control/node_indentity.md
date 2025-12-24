# Node Identity Model

In AIC–orchestration, a node is not identified solely by an address or UUID.

A **NodeID** represents an entity with:
- History
- Capabilities
- Behavioral patterns
- Trust relationships

---

## 1. Why Node Identity Matters

Traditional orchestration assumes:
> all nodes are interchangeable

AIC assumes:
> nodes can behave, degrade, or betray differently

---

## 2. Components of Node Identity

A NodeID conceptually binds:

- Cryptographic identity
- Execution environment
- Capability profile
- Behavioral history
- Trust score

This allows the control plane to reason about **who** is acting, not just **what** failed.

---

## 3. NodeID vs Address

| Aspect | Address | NodeID |
|-----|------|------|
| Persistent | ❌ | ✅ |
| Trust-aware | ❌ | ✅ |
| Behavioral memory | ❌ | ✅ |
| Auditable | ❌ | ✅ |

---

## 4. Design Constraint

NodeID **must survive restarts** and **outlive processes**.
Deleting a node does not erase its identity or history.

---

## 5. Security Implication

Compromising a node does not reset trust.
Trust must be **earned back**, not redeployed.

