#include "../Leetcode_Utility.h"

bool isCircularSentence(string sentence) 
{
    bool result = true;
    int s_size = sentence.size();
    std::string curr_string = "";
    std::vector<std::string> word_list;

    if(sentence[0] != sentence[s_size-1])
    {
        return false;
    }

    for(int i = 0; i < s_size; i++)
    {
        if(!isalnum(sentence[i]))
        {
            word_list.push_back(curr_string);
            curr_string = "";
        }
        else if(i == s_size-1)
        {
            curr_string += sentence[i];
            word_list.push_back(curr_string);
        }
        else
        {
            curr_string += sentence[i];
        }
    }

    for(int i = 0; i < word_list.size()-1; i++)
    {
        std::string curr_word = word_list[i];
        char last_of_curr  = curr_word[curr_word.size()-1];
        char first_of_next = word_list[i+1][0];
        if(i == 0)
        {
            std::string last_word = word_list[word_list.size()-1];
            if(curr_word[0] != last_word[last_word.size()-1])
            {
                result = false;
                break;
            }
        }   // END if last char of last word == first char of first word

        if(last_of_curr != first_of_next)
        {
            result = false;
            break;
        }   // END if last char of curr word == first char of next
    }

    return result;
}   // END isCircularSentence()