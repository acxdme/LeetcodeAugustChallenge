/*
Method-1 (Using two pass)
Time complexity : O(n)
Space complexity :O(n)
*/

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A)
    {
        vector<int> answer;
        int n=A.size();
        for(int i=0;i<n;i++)
        {
            if(A[i] % 2== 0 )
                answer.push_back(A[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(A[i] %2 == 1 )
                answer.push_back(A[i]);
        }
        
        return answer;
    }
};

/*
Method-2
Time complexity : O(n)
Space complexity : O(1)
My approach : using  the concept of quicksort to partition the even and odd parity number in-place.Similar to National Dutch Flag Problem.
*/

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) 
    {
        int n=A.size();
        int start=0, end=n-1;
        while(start< end)
        {
            if(A[start] %2 ==0)
                start++;
            else
            {
                swap(A[start],A[end]);
                end--;
            }
        }
        return A;
    }
};

