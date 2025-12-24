# Control Decision Flow

AIC–orchestration follows a strict control loop.

---

## 1. Control Loop

1. Observe system state
2. Generate StateSnapshot
3. Evaluate risk and trust
4. Propose ControlAction
5. Verify constraints
6. Execute or defer
7. Record outcome

---

## 2. No Direct Execution

The control plane:
- Does not mutate state directly
- Issues intentions, not commands

Execution layers are **separate by design**.

---

## 3. Failure Handling

Failure to act is a valid outcome.
Inaction is recorded as a decision.

---

## 4. Temporal Awareness

Decisions are time-sensitive.
Late correctness may be worse than early conservatism.

---

## 5. Key Principle

Control is a reasoning process, not a reflex.

