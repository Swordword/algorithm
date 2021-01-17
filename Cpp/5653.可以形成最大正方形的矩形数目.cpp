#include "common.h"

class Solution
{
public:
    int countGoodRectangles(vector<vector<int>> &rectangles)
    {
        int max_len = 0, occur_time = 0;
        for (auto start = rectangles.begin(); start != rectangles.end(); start++)
        {
            int temp_min = (*start)[0] > (*start)[1] ? (*start)[1] : (*start)[0];

            if (temp_min > max_len)
            {
                max_len = temp_min;
                occur_time = 1;
            }
            else if (temp_min == max_len)
            {
                occur_time += 1;
            }

        }
        return occur_time;
    }
};