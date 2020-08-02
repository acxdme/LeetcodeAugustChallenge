/*
Time complexity : O(n)
Space complexity : O(1)
My approch : There can be 4 categories of words  1-ACXD(all caps) 2-acxd(all small) 3-Acxd(only 1st caps rest small)  4-acXd/AcXd (mixed type)
*/
class Solution {
public:
    bool detectCapitalUse(string word)
    {
        int n=word.size();      //USA
        bool lo=false,up=false;

        if(islower(word[0]))
             lo=true;
        if(isupper(word[0]))
             up=true;
        int i=1;
        int flag=0;
        for(i=1;i<n;i++)
        {
            if(lo and isupper(word[i]))
                return false;
            if(up and islower(word[i]))
            {   flag=1;
                break;
            }
        }
        
        if(flag==1)
        {
        for(int t=1;t<n;t++)
         {
            if(isupper(word[t]))
                return false;
                 
         }
        }
       return true; 
    }
};
