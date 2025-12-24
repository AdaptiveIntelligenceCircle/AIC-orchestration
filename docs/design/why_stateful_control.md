# Why Stateful Control

AIC–orchestration adopts a stateful control model by design.

Stateless control is insufficient for adaptive systems.

---

## 1. Stateless Control Limitation

Stateless systems:

- Cannot learn from history
- Cannot reason causally
- Cannot attribute responsibility

They optimize throughput, not understanding.

---

## 2. Control Requires Memory

Adaptive systems evolve.
Evolution without memory leads to:

- Repeated mistakes
- Undetected drift
- Unsafe autonomy

State is the memory of control.

---

## 3. State as a First-Class Object

In AIC:

- State is explicit
- State is immutable once recorded
- State is auditable

Control decisions reference state directly.

---

## 4. Cost of Statefulness

Stateful control introduces:
- Storage overhead
- Complexity
- Slower decision paths

These costs are accepted deliberately.

---

## 5. Principle

> Control without memory is not control.
> It is reflex.

