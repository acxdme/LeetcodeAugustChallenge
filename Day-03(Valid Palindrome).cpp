/*
Time complexity :  O(n)
Space complexity :  O(n) 
My approach : generate the new string in one pass , also convert each alphabet tolower and keep the digits as it is.
*/

class Solution {
public:
    bool isPalindrome(string s)
    {
        string pal;
        for(int i=0;i<s.size();i++)
        {
            if((s[i]>='a' and s[i]<='z') or (s[i]>='A' and s[i]<='Z') or (s[i]>='0' and s[i]<='9'))
             {
                if((s[i]>='a' and s[i]<='z') or (s[i]>='A' and s[i]<='Z'))
                    pal+=  tolower(s[i]);
                else
                    pal+= s[i];       
              }
                
        }
        cout<<pal<<endl;
        string m=pal;
        reverse(m.begin(),m.end());
        if(m==pal)
            return true;

        return false;
    }
        
};
