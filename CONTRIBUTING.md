# Contributing to AIC Orchestration

Thank you for your interest in contributing to AIC Orchestration.

Before contributing, please understand that this project is **not**
a generic orchestration framework. It exists to enforce **control
over adaptive systems**, not to optimize deployment speed or scale.

---

## What This Project Values

We value contributions that improve:

- System controllability
- Behavioral traceability
- Deterministic lifecycle management
- Clear failure handling
- Human-in-the-loop enforcement

We do NOT prioritize:
- Performance micro-optimizations
- Feature bloat
- Cloud-specific integrations
- Autonomous decision-making without oversight

---

## Contribution Types Welcome

- Core orchestration logic
- Failure handling & rollback mechanisms
- Documentation improvements
- Example scenarios (single-node / multi-node)
- Security reviews and threat modeling
- Tests focused on failure and recovery

---

## Contribution Process

1. Fork the repository
2. Create a focused branch
3. Make small, well-scoped changes
4. Include clear commit messages
5. Open a Pull Request with:
   - Motivation
   - Design rationale
   - Potential risks

---

## Code Guidelines

- Prefer clarity over cleverness
- Avoid hidden state
- Avoid implicit behavior
- Make failures explicit
- Keep logic deterministic

If a reviewer cannot explain your code after reading it,
the code is not acceptable.

---

## Architectural Constraints

Please respect these non-negotiable constraints:

- Orchestrator does not learn
- Orchestrator does not optimize
- Orchestrator does not predict
- Orchestrator enforces rules and transitions only

Any PR violating these constraints will be rejected.

---

## Review Philosophy

Reviews may be strict.
This is intentional.

AIC Orchestration is a **safety-critical component**.
Every change is assumed to be potentially dangerous
until proven otherwise.

---

## Final Note

By contributing, you agree that **control is more important than capability**.
If this philosophy does not align with you,
this may not be the right project to contribute to.
