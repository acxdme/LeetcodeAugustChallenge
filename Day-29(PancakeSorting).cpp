/*
Time complexity : O(N^2)
Space complexity : O(N)
My approach : similar to bubble sort.
*/

class Solution {
    void flip(vector<int>& A, int idx){
        for(int i = 0; i <= idx/2; ++i){
            int tmp = A[i];
            A[i] = A[idx-i];
            A[idx-i] = tmp;
        }
    }
public:
    vector<int> pancakeSort(vector<int>& A) {
        vector<int> result;
        for(int i = A.size()-1; i > 0; --i)
        {
            for(int j = 1; j <= i; ++j)
            {
                if(A[j] == i+1)
                {
                    // flip(A, j);
                     reverse(A.begin(),A.begin()+j+1);
                    result.push_back(j+1);
                    break;
                }
            }
            // flip(A, i);
            reverse(A.begin(),A.begin()+i+1);
            result.push_back(i+1);
        }
        return result;
    }
};
