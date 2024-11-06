#include "../Leetcode_Utility.h"

string mergeAlternately(string word1, string word2) 
{
    std::string merge_string = "";
    int w1_size = word1.size();
    int w2_size = word2.size();
    int min_size = w1_size < w2_size ? w1_size : w2_size;
    
    while(word1.size() != 0 && word2.size() != 0)
    {
        merge_string.push_back(word1[0]);
        merge_string.push_back(word2[0]);

        word1.erase(0,1);
        word2.erase(0,1);

    }

    if(word1.size() != 0)
    {
        merge_string += word1;
    }
    else if(word2.size() != 0)
    {
        merge_string += word2;
    }

    return merge_string;
}