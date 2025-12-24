# Control Loop Diagram

The control loop represents the **core reasoning cycle** of AIC–orchestration.

It is not a reactive loop.
It is a **deliberative loop**.

---

## 1. Control Loop

``` pgsql 
┌──────────────┐
│ Observe │
└─────┬────────┘
│
▼
┌──────────────┐
│ Snapshot │
│ Generation │
└─────┬────────┘
│
▼
┌──────────────┐
│ Risk & Trust │
│ Evaluation │
└─────┬────────┘
│
▼
┌──────────────┐
│ Decision │
│ Engine │
└─────┬────────┘
│
▼
┌──────────────┐
│ Constraint │
│ Check │
└─────┬────────┘
│
▼
┌──────────────┐
│ ControlAction│
└─────┬────────┘
│
▼
┌──────────────┐
│ Execution / │
│ Defer / Halt │
└──────────────┘

```


---

## 2. Possible Outcomes

The loop may result in:
- Action execution
- Deferred decision
- Human escalation
- Explicit inaction

All outcomes are valid and recorded.

---

## 3. Non-Goal

The loop does NOT aim to:
- React instantly
- Optimize throughput

It aims to **decide responsibly**.

