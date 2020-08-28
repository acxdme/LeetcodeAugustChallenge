/*
 time complexity : o(Nlogn)
 Space complexity : O(n)
 My approach : store the intervals along with their index in a newly created vector<pair<pair<int,int>,int>> sorted, now use binary search to find the minimum right interval.
 */
 class Solution {
public:
    
    int binary_search (vector<pair<pair<int,int>,int>>& sorted, int x)
    {
        int n=sorted.size();
        if(sorted[n-1].first.first < x)
            return -1;
       int l = 0, r = n-1;
        while(l <= r)
        {
            int mid = l + (r-l)/2;
            if(sorted[mid].first.first >= x)
                r = mid-1;
            else 
                l = mid+1;
        }
        return sorted[l].second;
    }
    vector<int> findRightInterval(vector<vector<int>>& intervals)
    {
        int n=intervals.size();
        vector<int> result(n,-1);
        if(n==0)
            return result;
        vector<pair <pair<int,int>,int> > sorted;
        for(int i=0;i<n;i++)
        {
            sorted.push_back({{intervals[i][0],intervals[i][1]},i});
        }
        sort(sorted.begin(),sorted.end());
        
        for(int i=0;i<n;i++)
        {
            result[i]=binary_search(sorted,intervals[i][1]);
        }
        
      return result;  
    }
};
 
