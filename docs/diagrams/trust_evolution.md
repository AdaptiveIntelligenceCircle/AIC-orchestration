# Trust Evolution Diagram

Trust in AIC is dynamic and history-dependent.

This diagram illustrates how trust evolves over time.

---

## 1. Trust Timeline

``` pgsql 
Trust ↑
|
High | ┌───────┐
| │Stable │
| │Trust │
| └──┬────┘
| │ anomaly
| ▼
Mid | ┌───────────┐
| │Degrading │
| │Trust │
| └────┬──────┘
| │ repeated
| ▼
Low | ┌─────────────┐
| │Restricted │
| │Operation │
| └────┬────────┘
| │ recovery
| ▼
| ┌─────────────┐
| │Supervised │
| │Recovery │
| └─────────────┘
|
+──────────────────────→ Time

```

---

## 2. Properties

- Trust decays faster than it recovers
- Recovery requires supervision
- Trust never resets instantly

---

## 3. Design Insight

This prevents:
- Trust gaming
- Rapid privilege regain
- Cyclic abuse

