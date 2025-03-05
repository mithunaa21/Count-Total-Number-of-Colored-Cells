# Count Total Number of Colored Cells

## Problem Statement
Given an infinitely large two-dimensional grid of uncolored unit cells, we start by coloring a single cell blue. Every minute thereafter, every uncolored cell that touches a blue cell also gets colored blue. The task is to determine the total number of colored cells after `n` minutes.

## Approach
We used a **mathematical approach** to derive the formula for counting the number of colored cells at the end of `n` minutes.

### Observing the Growth Pattern
- At `n = 1`: 1 cell
- At `n = 2`: 5 cells
- At `n = 3`: 9 cells
- At `n = 4`: 13 cells

The number of colored cells follows an arithmetic sequence:
\[
1, 5, 9, 13, 17, \dots
\]

From observation, the total number of colored cells at `n` minutes follows the formula:
\[
Total = 1 + 2 \times (n-1) \times n
\]
This formula is derived from the sum of the first `(n-1)` natural numbers multiplied by 4 and then simplified.

## Time Complexity Analysis
- **Formula Execution:** \( O(1) \) (Constant time)
- **Space Complexity:** \( O(1) \) (Uses only a few variables)

This ensures an efficient solution even for large values of `n` (up to `100000`).

## Edge Cases Considered
- **Minimum Input (`n = 1`)**
- **Large Input (`n = 100000`)** to test overflow handling
- **General Cases** to verify formula correctness

## Conclusion
This approach leverages a mathematical formula to optimize computation to **O(1) time complexity**, making it highly efficient for large values of `n`. 🚀

