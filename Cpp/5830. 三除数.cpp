// https://leetcode-cn.com/contest/weekly-contest-252/problems/three-divisors/
#include "common.h"

class Solution
{
public:
  bool isThree(int n)
  {
    bool res = false;

    int a = int(sqrt(n));
    cout << "a: " << a << endl;
    if (a * a == n)
    {
      bool isPrime = true;
      cout << "is isPrime: " << isPrime << endl;
      for (int i = 2; i < a; ++i)
      {
        if (a % i == 0)
        {
          isPrime = false;
          break;
        }
      }
      cout << "is isPrime2 : " << isPrime << endl;
      if (isPrime)
      {
        res = true;
      }
    }
    cout << "res: " << res << endl;
    return res;
  }
};