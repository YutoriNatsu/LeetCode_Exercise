#include <vector>
using namespace std;

class Solution
{
   public:
    int busyStudent(vector<int> &startTime, vector<int> &endTime, int queryTime)
    {
        int res = 0;
        for (int i = startTime.size() - 1; i >= 0; i--)
            if (startTime[i] <= queryTime and endTime[i] >= queryTime)
                res++;
        return res;
    }
};