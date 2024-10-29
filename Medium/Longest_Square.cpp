#include "../Leetcode_Utility.h"

int longestSquareStreak(vector<int>& nums) 
{
    // Local variables
    int count = 0;
    long long curr_square = 0;
    int curr_count = 0;
    int n_size = nums.size();
    std::unordered_map<int, int> squares;

    for(int num : nums)
    {
        squares[num]++;
    }

    for(int i = 0; i < nums.size(); i++)
    {
        int curr_num = nums[i];
        curr_count = 1;
        while(squares[sqrt(curr_num)] >= 1)
        {
            int temp = sqrt(curr_num);
            if(temp * temp == curr_num)
            {
                curr_count++;
            }
            else
            {
                break;
            }
            curr_num = sqrt(curr_num);
        }
        if(curr_count > count)
        {
            count = curr_count;
        }
    }

    // If there is no squares in array, then return -1
    if(count == 0 || count == 1)
    {
        count = -1;
    }
    return count;   
}