# Security Policy – AIC Orchestration

## Scope

AIC Orchestration is a **control and lifecycle layer** for adaptive systems.
Any vulnerability that affects:
- system control
- rollback integrity
- isolation guarantees
- introspection trust

is considered **critical**.

This project intentionally prioritizes **safety, determinism, and auditability**
over performance or convenience.

---

## Supported Versions

Only the latest `main` branch is actively maintained for security updates.

Experimental branches and examples are provided **as-is**.

---

## Threat Model (High-Level)

AIC Orchestration assumes the following threat classes:

- Malicious or compromised adaptive components
- Faulty learning logic producing unsafe behavior
- Insider misuse of orchestration control
- Replay or spoofed orchestration messages

It explicitly does **NOT** aim to defend against:
- Physical attacks
- Kernel-level compromise outside AIC scope
- Nation-state level adversaries

---

## Reporting a Vulnerability

If you discover a security issue:

1. **DO NOT** open a public GitHub issue.
2. Contact the maintainers privately via:
   - GitHub Security Advisories (preferred)
   - Or direct message to the organization maintainers

Please include:
- A clear description of the issue
- Steps to reproduce (if possible)
- Potential impact on system control or trust

---

## Disclosure Philosophy

We follow **responsible disclosure**.

Security issues will be:
- Verified
- Patched
- Documented transparently

No vulnerability will be ignored if it compromises
the ability to **stop, rollback, or constrain adaptive behavior**.

---

## Security Principles

- Control must always override intelligence
- Rollback must never be bypassable
- Orchestration decisions must be auditable
- Automation must never eliminate human override

If a change weakens any of these principles,
it will be rejected regardless of functionality.

---

## Final Note

AIC Orchestration treats security not as a feature,
but as the **reason the system exists**.
