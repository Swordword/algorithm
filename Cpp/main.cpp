#include "common.h"

#include "5680. 找到最近的有相同 X 或 Y 坐标的点.cpp"
int main()
{
  int x = 3, y = 4;
  // vector<vector<int>> points{{1, 2}, {3, 1}, {2, 4}, {2, 3}, {4, 4}};
  vector<vector<int>> points{{3, 4}};

  Solution sol;
  auto res = sol.nearestValidPoint(x, y, points);
  cout << res << endl;
  return 0;
}