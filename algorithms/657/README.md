# Problem
[686. Repeated String Match](https://leetcode.com/problems/judge-route-circle)

# Solution
Let's consider Robot's movements in Descartes x-y coordinates:
- Place the starting position as root point [0,0]
- Move R,L,U,D is associated with be moved to point [1,0], [-1,0], [0,1], [0,-1], respectively.
After all moves, if Rebot's final position is still [0,0], the route is a cirle.