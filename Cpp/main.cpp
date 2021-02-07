#include "common.h"

#include "5672. 检查数组是否经排序和轮转得到.cpp"
int main()
{
  vector<int> ivec{2, 3, 6, 4, 5, 1};
  Solution sol;
  auto res = sol.check(ivec);
  cout << res << endl;
  return 0;
}