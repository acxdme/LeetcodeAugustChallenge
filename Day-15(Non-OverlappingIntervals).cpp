/*
Time complexity : O(N)
Space complexity :O(1)
Algo : Sort the intervals according to the starting point 
       initialize the pair with the first interval,
       Iterate over the remaining intervals
       If the ith interval is non-overlapping then pair is updated to ith.
       If the ith interval is overlapping then overlap++ also 
                  if the end point of pair is greater than interval (engulfed) pair is updated to ith interval
                  else dont update the pair.
       return the count of overlap.
*/

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) 
    {
        int n = intervals.size();
        if(n==0 or n==1)
            return 0;
       int overlap=0;
       sort(intervals.begin(),intervals.end());
        pair<int,int> p;
        p.first= intervals[0][0];
        p.second=intervals[0][1];
        for(int i=1;i<n;i++)
        {
            if(p.second > intervals[i][0])
            {
                overlap++;
                if(p.second > intervals[i][1])
                { 
                   p.first = intervals[i][0];
                   p.second =intervals[i][1];
                }
            }
            else
            {
                   p.first = intervals[i][0];
                   p.second =intervals[i][1];
                
            }
    

    
        }
        return overlap;
    }
};
