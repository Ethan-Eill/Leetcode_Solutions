#include "../Leetcode_Utility.h"

bool rotateString(string s, string goal) 
{
    bool result = false;
    int count = s.size();

    if(s == goal || s.size() == 0)
    {
        result = true;
        return result;
    }

    while(count > 0)    
    {
        char move = s[0];
        s.erase(s.begin());
        s.push_back(move);
        if(s == goal)
        {
            result = true;
            break;
        }
        count--;
    }

    return result;   
}   // END rotateString()