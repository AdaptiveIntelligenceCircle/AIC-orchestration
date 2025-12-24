# Trust and Safety Architecture

Trust is a first-class architectural concern in AIC–orchestration.

The system assumes that:
> capability does not imply trust

---

## 1. Trust as a Dynamic Property

Trust is:

- Earned over time
- Degraded by anomalies
- Recoverable under supervision

It is never binary.

---

## 2. Trust Integration Points

Trust influences:

- ControlAction eligibility
- Rollback aggressiveness
- Autonomy level
- Human approval requirements

---

## 3. Safety Over Liveness

When trust is uncertain:

- The system prefers to stop
- Delay decisions
- Escalate to humans

Availability is sacrificed for safety when necessary.

---

## 4. Insider Threat Assumption

The architecture explicitly accounts for:
- Compromised nodes
- Malicious insiders
- Gradual trust erosion

Trust decay is continuous, not event-based.

---

## 5. Architectural Principle

> A system that cannot distrust itself is unsafe by design.

