# Walkthrough: Distributed Isolation

1. Start all nodes
2. Node-B proposes abnormal adaptation
3. IBCS (Node-C) flags violation
4. Orchestrator isolates Node-B
5. Node-A continues operation

Result:
- No cascade failure
- Trust boundary preserved
- Cluster remains stable
