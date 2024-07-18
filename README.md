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

