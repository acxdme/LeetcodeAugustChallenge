/*
Time complexity : O(N)  but can be done using binary search
Space complexity : O(1)
My approach : Sort the citations in ascending order, iterate linearly and check if the ith citations is greater than (n-i)
Note : it is very important to clearly understand the defination of H-index.
Fact: the max H-index value for a list of citations can't exceed the size of citations, also the number greater than the max size can be treated as equivalent to max size.
*/
class Solution {
public:
    int hIndex(vector<int>& citations)
    {
        int n= citations.size();
        sort(citations.begin(),citations.end());
        if(n==0)
            return 0;
        int answer=0,i;
        for(int i=0;i<n;i++)
        {
            if((n-i)<=citations[i])
            {
                answer=n-i;
                break;
            }
        }
        return answer;
      
    }
};
