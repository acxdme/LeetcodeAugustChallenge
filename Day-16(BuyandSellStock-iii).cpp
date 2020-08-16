/*
Good Question!
Time complexity : O(N)
Space complexity : O(1)
MY approach : Using the Buy and sell stock problem's concept create two array left and right by traversing from left end and right end respectively , the maximum value of left and 
right gives us the answer. The left and right array stores the max profit obtained at ith index starting from left and right respectively.
*/

class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int n=prices.size();
        if(n==0)
            return 0;
        int mn=INT_MAX;
        int mx=0;
        int left[n];
        memset(left,0,sizeof(left));
        for(int i=0;i<n;i++)
        {
            if(prices[i]<mn)
            {
                mn=prices[i];
            }
            else if(prices[i]-mn > mx )
            {
                mx = prices[i]-mn;
            }
            left[i]=mx;
        }
        mx=INT_MIN;
        mn=0;
        int right[n];
        memset(right,0,sizeof(right));
        for(int i=n-1;i>=0;i--)
        {
            if(prices[i]>mx)
                mx=prices[i];
            else if(mx-prices[i]> mn)
                mn=mx-prices[i];
            right[i]=mn;
        }
        int answer=0;

        for(int i=0;i<n;i++)
            answer=max(right[i]+left[i],answer);
        return answer;
    }
};
