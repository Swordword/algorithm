#include "common.h"
#include "739.每日温度.cpp"

int main()
{

  Solution foo;
  vector<int> data{73, 74, 75, 71, 69, 72, 76, 73};
  
  auto res = foo.dailyTemperatures(data);
  for (auto &&i : res)
  {
    cout << i << ' ';
  }
  cout << endl;

  return 0;
}