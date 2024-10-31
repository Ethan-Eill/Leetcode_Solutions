#include "../Leetcode_Utility.h"

bool isGood(vector<int>& nums) 
{
    int nums_size = nums.size();
    int n = nums_size - 1;
    int counter = 1;
    int n_ocr = 0;
    bool result = true;

    sort(nums.begin(), nums.end());

    for(int i = 0; i < nums_size; i++)
    {
        if(counter == nums[i] && counter == n)
        {
            n_ocr++;
        }
        else if(counter == nums[i])
        {
            counter++;
        }
        else
        {
            result = false;
            break;
        }

    }   

    if(counter < nums_size-2 || n_ocr != 2)
    {
        result = false;
    }

    return result;

}   // END isGood()