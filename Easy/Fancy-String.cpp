#include "../Leetcode_Utility.h"

string makeFancyString(string s) 
{
    int consec_count = 0;
    int s_size = s.size();
    char prev_char = s[0];
    string fancy_string = "";

    for(int i = 0; i < s_size; i++)
    {
        if(prev_char == s[i])
        {
            consec_count++;
        }
        else if (prev_char != s[i])
        {
            consec_count = 1;
            prev_char = s[i];
        }

        if(consec_count < 3)
        {
            fancy_string.push_back(s[i]);
        }
    }
    return fancy_string;
}   // END makeFancyString()