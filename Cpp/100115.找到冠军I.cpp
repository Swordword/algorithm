// https://leetcode.cn/contest/weekly-contest-370/problems/find-champion-i/

#include "common.h"

// 复制 class Solution {}
class Solution
{
public:
  int findChampion(vector<vector<int>> &grid)
  {
    int target;
    bool biggest = false;
    for (int i = 0; i < grid.size(); i++)
    {
      if (grid[i][i] == 0)
      {
        biggest = true;
        for (int j = 0; j < grid.size(); j++)
        {
          if (j != i && grid[i][j] == 0)
          {
            biggest = false;
            break;
          }
        }
        if (biggest)
        {
          target = i;
        }
      }
    }
    return target;
  }
};

int main()
{
  Solution s;
  vector<vector<int>> grid = {{0, 0, 1}, {1, 0, 1}, {1, 0, 0}};

  auto res = s.findChampion(grid);
  cout << res << endl;
  return 0;
}