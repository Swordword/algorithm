// https://leetcode-cn.com/contest/biweekly-contest-47/problems/find-nearest-point-that-has-the-same-x-or-y-coordinate/
#include "common.h"

class Solution
{
public:
  int nearestValidPoint(int x, int y, vector<vector<int>> &points)
  {
    int idx = -1;
    int len = -1;
    for (int i = 0; i < points.size(); i++)
    {
      auto &point = points[i];
      if (point[0] == x || point[1] == y)
      {
        auto distance = abs(point[0] - x) + abs(point[1] - y);
        cout << "distance: " << distance << endl;

        if (len < 0)
        {
          idx = i;
          len = distance;
        }

        if (distance < len)
        {
          idx = i;
          len = distance;
        }
      }
    }
    return idx;
  }
};