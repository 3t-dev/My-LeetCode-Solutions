#Problem
    [686. Repeated String Match](https://leetcode.com/contest/leetcode-weekly-contest-52/problems/repeated-string-match/)

# Solution
In simple, just only think about the case size of A is equal or greater than size of B.
If there's solution of A's repeated that B is a substring of it, then it can only in 2 possible cases:
- B is substring of A
- B is substring of double A
So, if A is longer than B, the result is [1, 2] of -1 (no solution).

In the remaining case, A is shorter than B. We simply repeate A until repeated A string is equal or longer than B. After that, it's considered as above case.
