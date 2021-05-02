#include "common.h"
#include "5746. 到目标元素的最小距离.cpp"

int main()
{

  Solution foo;
  vector<int> nums{1, 2, 3, 4, 5};
  int target = 5;
  int start = 3;

  int res = foo.getMinDistance(nums, target, start);
  cout << res << endl;
  return 0;
}