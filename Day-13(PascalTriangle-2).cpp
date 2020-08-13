/*
Time complexity : O(N^2)
Space complexity : O(k) // doing in O(k) space is the whole challenge
My approach : Use a vector of size n+1 ,initialized with 1 and then increment the values accordingly 
fact: The sum of each row is equal to 2^(n-1) where rows are 1-indexed
*/
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> result(rowIndex+1, 1);
        for(int i = 1; i < rowIndex; ++i){
            for(int j = i; j > 0; --j)
                result[j] += result[j-1];
        }
        return result;
    }
};
