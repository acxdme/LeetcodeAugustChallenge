/*
Time complexity :  O(1)
Space complexity : O(1)
My approach : use of log base 4 and comparing if ceil(log base 4(num) ) is equal to floor(log base 4(num) ) or not.
*/

class Solution {
public:
    bool isPowerOfFour(int num) 
    {
        if(num==0)
            return false;
        return ceil(log(num)/log(4))==floor(log(num)/log(4));
        
    }
};
