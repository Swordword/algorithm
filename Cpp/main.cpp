#include "common.h"
#include "5657. 唯一元素的和.cpp"
int main()
{
  vector<int> ivec{1,2,3,2};
  Solution sol;
  auto res = sol.sumOfUnique(ivec);
  cout << res << endl;
  return 0;
}