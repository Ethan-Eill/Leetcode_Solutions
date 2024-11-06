#include "../Leetcode_Utility.h"

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
{
    int max = 0;
    std::vector<bool> bool_arr;

    for(int i = 0; i < candies.size(); i++)
    {
        if(max < candies[i])
        {
            max = candies[i];
        }
    }   

    for(int i = 0; i < candies.size(); i++)
    {
        int curr_num = candies[i] + extraCandies;
        if(curr_num >= max)
        {
            bool_arr.push_back(true);
        }
        else
        {
            bool_arr.push_back(false);
        }
    }

    return bool_arr;
}