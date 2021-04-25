// https://leetcode-cn.com/contest/weekly-contest-238/problems/sum-of-digits-in-base-k/
#include "common.h"

class Solution
{
public:
  int sumBase(int n, int k)
  {
    if (n == 0)
      return 0;
    vector<int> res;
    while (n)
    {
      int mod = n % k;
      res.push_back(mod);
      n = (n - n % k) / k;
    }
    int sum = 0;
    for (auto &&i : res)
    {
      sum += i;
    }
    cout << sum << endl;
    return sum;
  }
};
