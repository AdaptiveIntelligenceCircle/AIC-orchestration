# Controlled Adaptivity

AIC–orchestration supports adaptivity,
but rejects uncontrolled self-modification.

---

## 1. The Adaptivity Risk

Unbounded adaptivity leads to:
- Policy drift
- Reward hacking
- Unverifiable behavior

These risks compound over time.

---

## 2. Adaptivity Boundaries

Adaptivity in AIC is bounded by:

- Explicit policy constraints
- Trust thresholds
- Snapshot comparison
- Human checkpoints

---

## 3. Learning vs Deciding

Learning systems may propose.
Control systems decide.

AIC separates these roles.

---

## 4. Failure Containment

When adaptivity fails:
- The system degrades gracefully
- Reverts to conservative mode
- Escalates to human review

---

## 5. Principle

> Adaptivity is power.
> Power must be governed.

