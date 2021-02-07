
// https://leetcode-cn.com/contest/weekly-contest-227/problems/maximum-score-from-removing-stones/
#include "common.h"
class Solution
{
public:
  int maximumScore(int a, int b, int c)
  {
    int sum = a + b + c;
    auto max_num = max({a, b, c});
    int rest = sum - max_num;
    return rest < sum / 2 ? rest : sum / 2;
  }
};