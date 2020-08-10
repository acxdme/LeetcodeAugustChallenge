/*
Time complexity  : O(n) , time taken to traverse the string
Space complexity : O(1)
My approach : the letter space is 26 (A-Z) , and we can see a pattern being followed ,so  every place we have 26 characters.
*/

class Solution {
public:
    int titleToNumber(string s) 
    {
        int n=s.length();
        int answer=0;
        long long int a[8];
        a[0]=1;
        for(int i=1;i<8;i++)
        {
            a[i]=a[i-1]*26;
        }
        int j=0;
        for(int i=n-1;i>=0;i--)
        {
            answer+= (int)(s[i]- 'A' +1) * a[j];
            j++;
        }
       return answer; 
    }
};

//Another approach 
class Solution {
public:
    int titleToNumber(string s) {
        int result = 0;
        for(char c : s){
            int d = c - 'A' + 1;
            result = result*26 + d;
        }
        return result;
    }
};
