// https://leetcode.cn/contest/biweekly-contest-116/problems/minimum-number-of-changes-to-make-binary-string-beautiful/

#include "common.h"

// 复制 class Solution {}

class Solution
{
public:
  int minChanges(string s)
  {
    int n = s.size();
    vector<int> prefix(n + 1, 0);
    for (int i = 0; i < n; ++i)
    {
      prefix[i + 1] = prefix[i] + (s[i] == '1');
    }

    int res = std::numeric_limits<int>::max();
    for (int i = 0; i + n / 2 <= n; ++i)
    {
      int ones = prefix[i + n / 2] - prefix[i];
      int zeros = n / 2 - ones;
      res = min(res, min(ones, zeros));
    }

    if (n % 2 == 0)
    {
      return res;
    }
    else
    {
      return min(res, min(prefix[n] - prefix[n / 2], prefix[n / 2]));
    }
  }
};

int main()
{
  Solution s;

  auto res = s.minChanges("0101");
  cout << res << endl;
  return 0;
}