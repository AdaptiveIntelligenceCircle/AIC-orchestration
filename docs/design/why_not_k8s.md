# Why Not Kubernetes

AIC–orchestration is intentionally not built on top of Kubernetes.

This is not due to technical limitations, but due to **philosophical and architectural mismatch**.

---

## 1. Kubernetes Assumptions

Kubernetes assumes:

- Workloads are disposable
- Nodes are interchangeable
- Restart is a valid recovery strategy
- State belongs outside the cluster

These assumptions conflict with AIC’s goals.

---

## 2. Control vs Scheduling

Kubernetes is excellent at:
- Scheduling
- Scaling
- Resource orchestration

AIC–orchestration is concerned with:
- Control decisions
- Trust evaluation
- Rollback reasoning
- Human oversight

These are orthogonal problems.

---

## 3. Failure Semantics

In Kubernetes:
> failure → restart → forget

In AIC:
> failure → analyze → record → rollback → remember

AIC treats failure as information, not noise.

---

## 4. Security Implication

Kubernetes implicitly trusts:
- Control loops
- Node compliance
- Configuration correctness

AIC assumes:
- Partial compromise
- Insider threats
- Silent corruption

---

## 5. Conclusion

Kubernetes could be integrated as an **execution substrate**,
but must never own the control plane.

