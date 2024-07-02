# Ingenuity-2D-DP

This repository contains code files and resources related to 2D Dynamic Programming workshop conducted by Ingenuity at IIT Bhilai.

## Problems Discussed
1. ### [Unique Paths](https://leetcode.com/problems/unique-paths/)

    Starting from the top-left corner of an `m x n` grid, how many unique paths are there to the bottom-right corner if you can only move either down or right at any point in time?

    ### Solutions:
    1. C++
        - [Tabulation](./1.%20Unique%20Paths/bottom_up.cpp)
        - [Combinatorics](./1%20Unique%20Paths/math.cpp)
    2. Python
        - [Tabulation](./1.%20Unique%20Paths/bottom_up.py)
        - [Tabulation with Space Optimization](./1.%20Unique%20Paths/bottom_up_space.py)
        - [Combinatorics](./1.%20Unique%20Paths/math_sol.py)

2. [Unique Paths II](https://leetcode.com/problems/unique-paths-ii/)

    Same as the previous problem, but now there are obstacles in the grid. You cannot move through obstacles.

    ### Solutions:
    1. C++
        - [Tabulation](./2.%20Unique%20Paths%20with%20Obstacles/bottom_up.cpp)
    2. Python
        - [Tabulation](./2.%20Unique%20Paths%20with%20Obstacles/bottom_up.py)


3. [Book Shop](https://cses.fi/problemset/task/1158)

    You are in a book shop which sells `n` books, and you have `x` coins. Given the prices and pages of each book, find the maximum number of pages you can buy with the given amount of coins. 

    ### Solutions:
    1. C++
        - [Tabulation](./3.%20Book%20Shop/bottom_up.cpp)
        - [Tabulation with Space Optimization](./3.%20Book%20Shop/bottom_up_space.cpp)
    2. Python
        - [Tabulation with Space Optimization](./3.%20Book%20Shop/bottom_up_space.py)

Solutions are provided in C++. Bottom-Up or Tabulation approach is used for all the problems.

## Resources
- [Slides](https://docs.google.com/presentation/d/1RwMLsQ6OAE5KANBT24xlfu3ESec2DJBhsL3epi0Nkh0/edit?usp=sharing)
- ### Video Resources
  1. [Dynamic Programming Playlist | Interview Questions | Recursion | Tabulation | Striver | C++ | Java | DSA | Placements](https://youtube.com/playlist?list=PLgUwDviBIf0qUlt5H_kiKYaNSqJ81PMMY)
  2. [Mastering Dynamic Programming - How to solve any interview problem (Part 1)](https://youtu.be/Hdr64lKQ3e4)
  3. [Lecture 20: Dynamic Programming II: Text Justification, Blackjack - MIT OpenCourseWare](https://www.youtube.com/watch?v=ENyox7kNKeY)
  4. [Lecture 21: Dynamic Programming III: Parenthesization, Edit Distance, Knapsack - MIT OpenCourseWare](https://www.youtube.com/watch?v=ocZMDMZwhCY)
- ### Classic 2D DP Problems
 1. [Longest Common Subsequence](https://www.geeksforgeeks.org/longest-common-subsequence-dp-4/)
 2. [0-1 Knapsack](https://www.geeksforgeeks.org/0-1-knapsack-problem-dp-10/)
 3. [Matrix Chain Multiplication](https://www.geeksforgeeks.org/matrix-chain-multiplication-dp-8/)
 4. [Coin Change - I (Optimization)](https://www.geeksforgeeks.org/find-minimum-number-of-coins-that-make-a-change/)
 4. [Coin Change - II (Counting)](https://www.geeksforgeeks.org/coin-change-dp-7/)
- ### Additional Problems
 1. 0-1 Knapsack variants
    - [ICPC : Super Sale](https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1071) (Same as 0-1 Knapsack)
    - [CodeForces : Double KnapSack](https://codeforces.com/problemset/problem/618/F) (2 knapsacks)
    - [Kattis : Restaurant Orders](https://open.kattis.com/contests/wf6xh5/problems/orders) (Simple Variant; print solutions)
 2. DP on strings
    - [Edit Distance](https://leetcode.com/problems/edit-distance/) (Similar to LCS)
    - [Longest Palindromic Subsequence](https://leetcode.com/problems/longest-palindromic-subsequence/) 
 3. [CSES Problemset DP](https://cses.fi/problemset/) (Many variants of DP ranging from easy to hard)
