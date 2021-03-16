/*
 * @lc app=leetcode.cn id=59 lang=cpp
 *
 * [59] 螺旋矩阵 II
 */
// @lc code=start

#include "common.h"

class Solution
{
public:
    vector<vector<int>> generateMatrix(int n)
    {
        int maxNum = n * n;
        int curNum = 1;
        vector<vector<int>> matrix(n, vector<int>(n));
        int row = 0, column = 0;
        vector<vector<int>> directions{{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        int directionIndex = 0;
        while (curNum <= maxNum)
        {
            matrix[row][column] = curNum;
            ++curNum;
            int nextRow = row + directions[directionIndex][0], nextColumn = column + directions[directionIndex][1];
            if (nextRow < 0 || nextRow >= n || nextColumn < 0 || nextColumn >= n || matrix[nextRow][nextColumn] != 0)
                directionIndex = (directionIndex + 1) % 4;
            row = row + directions[directionIndex][0];
            column = column + directions[directionIndex][1];
        }

        return matrix;
    }
};
// @lc code=end
