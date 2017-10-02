# Problem
[687. Longest Univalue Path](https://leetcode.com/contest/leetcode-weekly-contest-52/problems/longest-univalue-path/)

# Solution
Below is the my first solution. I think it should be performance improved.
This is here:

              5
             / \
            4   5
           / \   \
          1   1   5

              1                     
             / \
            4   5
           / \   \
          4   4   5

              1                     
             / \
            4   5
           / \   \
          4   4   5
            /   \
           4     4
                  \
                   4
Let's consider above trees.
We can see there is always a top note of longest path. That note connects 2 path from left and right (in the first tree, left path is empty).

So, to find the longest path, we will find the node that have sum of left path length and right path length is the longest.
-> this problem becomes the find maximum path of nodes that equal with specified value (value of top node) in the sub tree.
E.g: the third tree, with top is node 4 of level 2, the leff path is [4-4], the right path is [4-4-4-4]

# Next job
My current implement faces with duplicated node travel problem, I'll try to improve it in next time.