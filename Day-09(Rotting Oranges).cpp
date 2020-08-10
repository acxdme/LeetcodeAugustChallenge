/*
Time complexity : O(n^2)
Space complexity :O(n^2)
My approach : Use of BFS to find the rotting oranges.
*/
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid)
    {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>> q;
        int t=0, fresh=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({i,j});
                   
                }
                else if(grid[i][j]==1)
                    fresh++;
            }
        }
        
        while(!q.empty())
        {
            int num=q.size();
            for(int i=0;i<num;i++)
            {
            int x= q.front().first, y=q.front().second;
            q.pop();
            if(x >0 and grid[x-1][y]==1 )
            {
                fresh--;
                grid[x-1][y]=2;
                q.push({x-1,y});
            }
            if(y>0 and grid[x][y-1]==1 )
            {
                fresh--;
                grid[x][y-1]=2;
                q.push({x,y-1});
            }
            if(x<n-1 and grid[x+1][y]==1)
            {
                fresh--;
                grid[x+1][y]=2;
                q.push({x+1,y});
            }
            if(y<m-1 and grid[x][y+1]==1)
            {
                fresh--;
                grid[x][y+1]=2;
                q.push({x,y+1});
            }
            }
            if(!q.empty()) t++;
        }
        
        if(fresh==0)
            return t;
        return -1;
        
    }
};
