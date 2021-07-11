#include "common.h"
#include "5801. 消灭怪物的最大数量.cpp"

int main()
{
  int a = 3;
  int b = 4;
  double c = a / (b / 1.0);
  cout << "c: " << c << endl;
  Solution foo;
  vector<int> dist{1, 3, 4},
      speed{1, 1, 1};
  auto res = foo.eliminateMaximum(dist, speed);

  cout << "res = " << res << endl;

  return 0;
}