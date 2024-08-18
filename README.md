# DSA-Questions

# Perfect Squares 

Given an integer n, return the least number of perfect square numbers that sum to n.

A perfect square is an integer that is the square of an integer; in other words, it is the product of some integer with itself. For example, 1, 4, 9, and 16 are perfect squares while 3 and 11 are not.

Example 1:

Input: n = 12\
Output: 3\
Explanation: 12 = 4 + 4 + 4.

Example 2:

Input: n = 13\
Output: 2\
Explanation: 13 = 4 + 9.

Constraints:

1 <= n <= 10^4


# Eating Bananas 

Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.

Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.

Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

Return the minimum integer k such that she can eat all the bananas within h hours.

Example 1:

Input: piles = [3,6,7,11], h = 8 \
Output: 4\
Example 2:

Input: piles = [30,11,23,4,20], h = 5\
Output: 30\
Example 3:

Input: piles = [30,11,23,4,20], h = 6\
Output: 23

Constraints:

1 <= piles.length <= 10^4\
piles.length <= h <= 10^9\
1 <= piles[i] <= 10^9


# Longest Substring Without Repeating Characters

Given a string s, find the length of the longest substring without repeating characters.

Example 1:

Input: s = "abcabcbb" \
Output: 3\
Explanation: The answer is "abc", with the length of 3.\
Example 2:

Input: s = "bbbbb"\
Output: 1\
Explanation: The answer is "b", with the length of 1.\
Example 3:

Input: s = "pwwkew"\
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
 

Constraints:

0 <= s.length <= 5 * 10^4

s consists of English letters, digits, symbols and spaces.


# Path Sum

Given the root of a binary tree and an integer targetSum, return all root-to-leaf paths where the sum of the node values in the path equals targetSum. 

A root-to-leaf path is a path starting from the root and ending at any leaf node. A leaf is a node with no children.

Input: root = [5,4,8,11,null,13,4,7,2,null,null,5,1], targetSum = 22\
Output: [[5,4,11,2],[5,8,4,5]]\
Explanation: There are two paths whose sum equals targetSum:\
5 + 4 + 11 + 2 = 22\
5 + 8 + 4 + 5 = 22

Input: root = [1,2,3], targetSum = 5\
Output: []

Input: root = [1,2], targetSum = 0\
Output: []

Constraints:
The number of nodes in the tree is in the range [0, 5000].\
-1000 <= Node.val <= 1000\
-1000 <= targetSum <= 1000

# Subarray Product Less Than K

Given an array of integers nums and an integer k, return the number of contiguous subarrays where the product of all the elements in the subarray is strictly less than k.

Example 1:

Input: nums = [10,5,2,6], k = 100\
Output: 8\
Explanation: The 8 subarrays that have product less than 100 are:\
[10], [5], [2], [6], [10, 5], [5, 2], [2, 6], [5, 2, 6]\
Note that [10, 5, 2] is not included as the product of 100 is not strictly less than k.

Example 2:

Input: nums = [1,2,3], k = 0\
Output: 0
 

Constraints:

1 <= nums.length <= 3 * 10^4\
1 <= nums[i] <= 1000\
0 <= k <= 10^6

# Binary Tree Right Side View
Given the root of a binary tree, imagine yourself standing on the right side of it, return the values of the nodes you can see ordered from top to bottom.

Example 1:
Input: root = [1,2,3,null,5,null,4]\
Output: [1,3,4]

Example 2:

Input: root = [1,null,3]\
Output: [1,3]\
Example 3:

Input: root = []\
Output: []

Constraints:

The number of nodes in the tree is in the range [0, 100].\
-100 <= Node.val <= 100

# Largest BST Subtree
Given a binary tree, find the largest subtree which is a Binary Search Tree (BST), where largest means subtree with largest number of nodes in it.
Note:
A subtree must include all of its descendants.

Example:

Input: [10,5,15,1,8,null,7]

   10
   / \
  5  15
 / \   \
1   8   7

Output: 3\
Explanation: The Largest BST Subtree in this case is the highlighted one.\
             The return value is the subtree's size, which is 3.\
Follow up:\
Can you figure out ways to solve it with O(n) time complexity?         

# Minimize Malware Spread
You are given a network of n nodes represented as an n x n adjacency matrix graph, where the ith node is directly connected to the jth node if graph[i][j] == 1.

Some nodes initial are initially infected by malware. Whenever two nodes are directly connected, and at least one of those two nodes is infected by malware, both nodes will be infected by malware. This spread of malware will continue until no more nodes can be infected in this manner.

Suppose M(initial) is the final number of nodes infected with malware in the entire network after the spread of malware stops. We will remove exactly one node from initial.

Return the node that, if removed, would minimize M(initial). If multiple nodes could be removed to minimize M(initial), return such a node with the smallest index.

Note that if a node was removed from the initial list of infected nodes, it might still be infected later due to the malware spread.

 

Example 1:

Input: graph = [[1,1,0],[1,1,0],[0,0,1]], initial = [0,1]\
Output: 0

Example 2:

Input: graph = [[1,0,0],[0,1,0],[0,0,1]], initial = [0,2]\
Output: 0

Example 3:

Input: graph = [[1,1,1],[1,1,1],[1,1,1]], initial = [1,2]\
Output: 1
 

Constraints:

n == graph.length\
n == graph[i].length\
2 <= n <= 300\
graph[i][j] is 0 or 1.\
graph[i][j] == graph[j][i]\
graph[i][i] == 1\
1 <= initial.length <= n\
0 <= initial[i] <= n - 1\
All the integers in initial are unique.

# Network Delay Time

You are given a network of n nodes, labeled from 1 to n. You are also given times, a list of travel times as directed edges times[i] = (ui, vi, wi), where ui is the source node, vi is the target node, and wi is the time it takes for a signal to travel from source to target.

We will send a signal from a given node k. Return the minimum time it takes for all the n nodes to receive the signal. If it is impossible for all the n nodes to receive the signal, return -1.

Example 1:
Input: times = [[2,1,1],[2,3,1],[3,4,1]], n = 4, k = 2\
Output: 2\
Example 2:

Input: times = [[1,2,1]], n = 2, k = 1\
Output: 1\
Example 3:

Input: times = [[1,2,1]], n = 2, k = 2\
Output: -1

Constraints:

1 <= k <= n <= 100\
1 <= times.length <= 6000\
times[i].length == 3\
1 <= ui, vi <= n\
ui != vi\
0 <= wi <= 100\
All the pairs (ui, vi) are unique. (i.e., no multiple edges.)

 # Snapshot Array

 Implement a SnapshotArray that supports the following interface:

SnapshotArray(int length) initializes an array-like data structure with the given length. Initially, each element equals 0.
void set(index, val) sets the element at the given index to be equal to val.
int snap() takes a snapshot of the array and returns the snap_id: the total number of times we called snap() minus 1.
int get(index, snap_id) returns the value at the given index, at the time we took the snapshot with the given snap_id

Example 1:

Input: ["SnapshotArray","set","snap","set","get"]
[[3],[0,5],[],[0,6],[0,0]] \
Output: [null,null,0,null,5]\
Explanation: \
SnapshotArray snapshotArr = new SnapshotArray(3); // set the length to be 3\
snapshotArr.set(0,5);  // Set array[0] = 5\
snapshotArr.snap();  // Take a snapshot, return snap_id = 0\
snapshotArr.set(0,6);\
snapshotArr.get(0,0);  // Get the value of array[0] with snap_id = 0, return 5

Constraints:

1 <= length <= 5 * 10^4\
0 <= index < length\
0 <= val <= 10^9\
0 <= snap_id < (the total number of times we call snap())\
At most 5 * 10^4 calls will be made to set, snap, and get.

# Remove Duplicate Letters
Given a string s, remove duplicate letters so that every letter appears once and only once. You must make sure your result is 
the smallest in lexicographical order among all possible results.

Example 1:

Input: s = "bcabc"\
Output: "abc"

Example 2:

Input: s = "cbacdcbc"\
Output: "acdb"

Constraints:

1 <= s.length <= 10^4\
s consists of lowercase English letters.

# Count the Number of Complete Components

You are given an integer n. There is an undirected graph with n vertices, numbered from 0 to n - 1. You are given a 2D integer array edges where edges[i] = [ai, bi] denotes that there exists an undirected edge connecting vertices ai and bi.

Return the number of complete connected components of the graph.

A connected component is a subgraph of a graph in which there exists a path between any two vertices, and no vertex of the subgraph shares an edge with a vertex outside of the subgraph.

A connected component is said to be complete if there exists an edge between every pair of its vertices.

Example 1:\
Input: n = 6, edges = [[0,1],[0,2],[1,2],[3,4]]\
Output: 3\
Explanation: From the picture above, one can see that all of the components of this graph are complete.

Example 2:\
Input: n = 6, edges = [[0,1],[0,2],[1,2],[3,4],[3,5]]\
Output: 1\
Explanation: The component containing vertices 0, 1, and 2 is complete since there is an edge between every pair of two vertices. On the other hand, the component containing vertices 3, 4, and 5 is not complete since there is no edge between vertices 4 and 5. Thus, the number of complete components in this graph is 1.

Constraints:

1 <= n <= 50\
0 <= edges.length <= n * (n - 1) / 2\
edges[i].length == 2\
0 <= ai, bi <= n - 1\
ai != bi\
There are no repeated edges.
