# Architecture Overview

AIC–orchestration is architected as a **control-centric system** rather than
a deployment-centric or execution-centric system.

Its primary responsibility is **decision making under uncertainty**, not resource scheduling.

---

## 1. Architectural Goal

The architecture is designed to answer one question:

> Given an adaptive, partially autonomous system,
> how do we retain **control, accountability, and recoverability**?

This goal directly shapes every architectural decision.

---

## 2. High-Level Components

AIC–orchestration consists of four conceptual layers:

1. Observation Layer  
2. Control Plane  
3. Execution Layer  
4. Rollback & Audit Layer  

These layers are **logically separated**, even if physically co-located.

---

## 3. Control-Centric View

Unlike traditional orchestration systems:

- Control Plane is **not a passive coordinator**
- Execution is **not trusted by default**
- State is **explicit and persistent**

The Control Plane reasons about:
- State
- Trust
