# First Codeforces solves: I/O retained, observation problems landing

User solved CF 1901A (Line Trip), 1903A (Halloumi Boxes) and 1900A (Cover in Water). They wrote the `sys.stdin.readline` multi-test skeleton correctly every time. Cover in Water was never taught, so the "find the one observation" approach is transferring.

**Evidence:** Solutions are in the repo, each committed under `CF<id>. <Title>/solution.py`. On Halloumi Boxes the user first misread the operation as "swap any two elements" (asked why `n=2, k=1, [3,1]` is NO). Corrected: a swap is a length-2 reversal, so it needs k ≥ 2.

**Implications:** Stop teaching CF I/O; it's retained. Watch for the misreading pattern: treating the allowed operation as more powerful than stated. Next CF lessons can move to Div 2 B, or back to the NC150 spine (Two Pointers is next).
