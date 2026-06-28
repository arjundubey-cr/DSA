# Valid Sudoku — Three-Set Hash Pattern

Multi-constraint membership checking via sets. Same set-per-membership pattern as Contains Duplicate, scaled to three simultaneous constraints: rows, cols, boxes.

**Core insight:** Box key `(r // 3, c // 3)` — integer division maps all 81 cells to one of 9 box identifiers with zero extra logic. Tuple is hashable → works as dict key.

**Evidence:** Lesson taught; quiz + recall challenge assigned.

**Implications:** Watch for transfer — does user apply the box key trick independently on novel grid problems? Next test is whether they recognize this as "set-per-constraint" rather than re-deriving from scratch.
