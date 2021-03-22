#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
  void max_sum()
  {
    int size;
    cin >> size;
    vector<int> vec;
    int temp;
    while (cin >> temp)
    {
      vec.push_back(temp);
    }

    int max_sum = 0, sum = 0, first = 0, last = 0;

    for (size_t i = 0; i < vec.size(); i++)
    {
      sum += vec[i];
      if (sum > max_sum)
      {
        max_sum = sum;
        last = i;
      }
      else if (sum < 0)
      {
        sum = 0;
      }
    }
    int tempSum = 0;

    if (max_sum == 0)
    {
      cout << 0 << " " << vec[0] << " " << vec[vec.size() - 1] << endl;
    }
    else
    {
      for (size_t i = last; i > 0; i--)
      {
        tempSum += vec[i];
        if (tempSum == max_sum)
        {
          first = i;
        }
      }
      cout << max_sum << " " << vec[first] << " " << vec[last] << endl;
    }
  }
};

int main()
{
  Solution sol;
  sol.max_sum();
  return 0;
}