# Rollback Sequence Diagram

This diagram shows how rollback is initiated and executed
as a **controlled, auditable sequence**.

---

## 1. Rollback Sequence

``` pgsql 

┌──────────────┐
│ Anomaly │
│ Detected │
└─────┬────────┘
│
▼
┌──────────────┐
│ Snapshot N │
│ (Current) │
└─────┬────────┘
│
▼
┌──────────────┐
│ Causal │
│ Analysis │
└─────┬────────┘
│
▼
┌──────────────┐
│ Select Safe │
│ Snapshot N-k │
└─────┬────────┘
│
▼
┌──────────────┐
│ Rollback │
│ Action │
└─────┬────────┘
│
▼
┌──────────────┐
│ Verify │
│ Post-State │
└─────┬────────┘
│
▼
┌──────────────┐
│ Audit Log │
│ Update │
└──────────────┘

```

---

## 2. Key Characteristics

- Rollback is never implicit
- Snapshot selection is explicit
- Post-rollback verification is mandatory

---

## 3. Important Note

Rollback does NOT erase:
- History
- Trust impact
- Responsibility

It only restores operational state.

