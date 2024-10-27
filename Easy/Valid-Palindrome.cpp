#include "../Leetcode_Utility.h"


//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+    
/// A phrase is a palindrome if, after converting all uppercase letters 
/// into lowercase letters and removing all non-alphanumeric characters, 
/// it reads the same forward and backward. Alphanumeric characters 
/// include letters and numbers.
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
bool isPalindrome(string s)
{
    // Local variable definitions
    bool result = true;
    int s_size = s.size();
    int size_half;

    // Get rid of all non-alphanumeric values
    for(int i = 0; i < s_size; i++)
    {
        s[i] = tolower(s[i]);
        if(!isalnum(static_cast<unsigned>(s[i])) || s[i] == ' ')
        {
            s.erase(i,1);
            s_size--;
            i--;
        }
    }

    size_half = s.size()/2;

    // Loop through both halves in lock-step,
    // If each character is not the same, then it is not a valid palindrome
    for(int i = 0, j = s.size()-1; i <= size_half && j >= size_half; i++, j--)
    {
        if(s[i] != s[j])
        {
            result = false;
            break;
        }
    } 

    return result;
}