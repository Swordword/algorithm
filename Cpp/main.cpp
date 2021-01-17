#include "common.h"
#include "5653.可以形成最大正方形的矩形数目.cpp"
int main()
{
  Solution sol;

  vector<vector<int>> ivec = {{5, 8}, {3, 9}, {5, 12}, {16, 5}};
  int res = sol.countGoodRectangles(ivec);
  cout << "res" << res << endl;
  return 0;
}