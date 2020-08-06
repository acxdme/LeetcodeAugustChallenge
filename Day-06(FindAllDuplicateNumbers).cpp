/*
Time complexity : O(N)
Space complexity : O(1)
My approach : Use of index marking method to find the number which as already been visited.
*/

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) 
    {     int n=nums.size();
          vector<int> answer;
        for(int i=0;i<n;i++)
        {
            if(nums[abs(nums[i])-1] > 0)  // 4 -3 -2 -7 8      -3 -1
                nums[abs(nums[i])-1]*= -1;
            else
                answer.push_back(abs(nums[i]));
                
        }
      return answer;  
    }
};
