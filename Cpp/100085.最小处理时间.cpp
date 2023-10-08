// https://leetcode.cn/contest/weekly-contest-366/problems/minimum-processing-time/

#include "common.h"

// 复制 class Solution {}
class Solution
{
public:
  int minProcessingTime(vector<int> &processorTime, vector<int> &tasks)
  {
    int n = processorTime.size();
    sort(processorTime.begin(), processorTime.end());
    priority_queue<int, vector<int>, greater<int>> pq; // 小根堆
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < 4; j++)
      {
        pq.push(processorTime[i]); // 初始化小根堆
      }
    }
    int ans = 0;
    sort(tasks.rbegin(), tasks.rend()); // 将任务按照时间从大到小排序
    for (int i = 0; i < tasks.size(); i++)
    {
      int t = pq.top();
      pq.pop();
      int taskTime = tasks[i];
      ans = max(ans, t + taskTime); // 更新最小时间
      // pq.push(max(ans, t + taskTime)); // 更新小根堆
    }
    return ans;
  }
};

int main()
{
  Solution s;
  vector<int> processorTime{10, 20};
  vector<int> tasks{2, 3, 1, 2, 5, 8, 4, 3};
  auto res = s.minProcessingTime(processorTime, tasks);
  cout << res << endl;
  return 0;
}