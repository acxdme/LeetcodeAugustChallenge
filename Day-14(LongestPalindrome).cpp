/*
Question : Given a string which consists of lowercase or uppercase letters, find the length of the longest palindromes that can be built with those letters.
This is case sensitive, for example "Aa" is not considered a palindrome here.

Note:
Assume the length of given string will not exceed 1,010.

Example:
Input: "abccccdd"
Output: 7

Explanation:
One longest palindrome that can be built is "dccaccd", whose length is 7.

*/

/*
Time complexity : O(n)
Space complexity : O(1)
My approach : use hash small and large for a-z and A-Z separately storing their counts , now in each hash, count the number of even pair of alphabets and keep a track if single 
alphabets exist or not ,because we can insert only 1 single elements to make an odd palindrome.
*/
class Solution {
public:
    int longestPalindrome(string s) 
    {
        int small[26]={0};
        int large[26]={0};
        
        for(int i=0;i<s.size();i++)
        {
            if(isupper(s[i]))
            {
                large[s[i]-'A']++;
            }
            else
            {
                small[s[i]-'a']++;
            }
        }
        int total=0;
        int lonely=0;
      for(int i=0;i<26;i++)
      {
          if(small[i]%2==0)
          {
              total+=small[i];
          }
          else
          {
              if(small[i]>1)
              {
                  total+= (small[i]-1);
                  lonely++;
              }
          }
         if( small[i]==1)
             lonely++;
          
      }

    for(int i=0;i<26;i++)
      {
          if(large[i]%2==0)
          {
              total+=large[i];
          }
          else
          {
              if(small[i]>1)
              {
                  total+=(large[i]-1);
                  lonely++;
              }
          }
         if( large[i]==1)
             lonely++;
          
      }
        if(lonely>0)
            total++;
            
            return total;
        
    }
};
