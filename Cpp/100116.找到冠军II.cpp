// https://leetcode.cn/contest/weekly-contest-370/problems/find-champion-ii/

#include "common.h"

// 复制 class Solution {}
class Solution
{
public:
  int findChampion(int n, vector<vector<int>> &edges)
  {
    vector<int> outDegree(n, 0);
    for (auto &edge : edges)
    {
      outDegree[edge[1]]++;
    }
    int count = 0;
    int champion = -1;
    for (int i = 0; i < n; i++)
    {
      if (outDegree[i] == 0)
      {
        count++;
        champion = i;
      }
    }
    return count == 1 ? champion : -1;
  }
};

int main()
{
  Solution s;
  int n = 3;
  vector<vector<int>> edges = {{0, 1}, {1, 2}};
  auto res = s.findChampion(n, edges);
  cout << res << endl;
  return 0;
}