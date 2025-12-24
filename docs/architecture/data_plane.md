# Data Plane Architecture

The Data Plane is where execution happens.

It is intentionally treated as **untrusted by default**.

---

## 1. Role of the Data Plane

The Data Plane is responsible for:

- Executing ControlActions
- Running workloads or behaviors
- Reporting observations back to Control Plane

It does not make policy decisions.

---

## 2. Separation of Concerns

A strict boundary exists:

| Control Plane | Data Plane |
|-------------|-----------|
| Decides | Executes |
| Reasons | Acts |
| Audits | Reports |

This separation prevents authority leakage.

---

## 3. Partial Failure Assumption

The Data Plane is assumed to be:

- Fallible
- Compromisable
- Observable but not fully verifiable

The architecture assumes **partial correctness**, not perfection.

---

## 4. Feedback Loop

Execution results are:

- Observed
- Recorded
- Compared against expectations

Deviation is treated as signal, not noise.

---

## 5. Design Rule

The Data Plane must never be able to:
- Rewrite state history
- Alter trust records
- Suppress audit logs

