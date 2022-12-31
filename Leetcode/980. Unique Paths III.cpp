class Solution {
public:
     int path(int n,int m,int i,int j,int &c,int x,vector<vector<int>> &grid)
    {
        if(i<0 or j<0 or i>=n or j>=m or grid[i][j]==-1 or grid[i][j]==3)
            return 0;
        if(grid[i][j]==2)
        {
            if(x-1 == c) return 1;
            return 0;
        }
        grid[i][j]=3; 
        int u = path(n,m,i-1,j,c,x+1,grid);
        int d = path(n,m,i+1,j,c,x+1,grid);
        int l = path(n,m,i,j-1,c,x+1,grid);
        int r = path(n,m,i,j+1,c,x+1,grid);
        grid[i][j]=0;                     
        return u+d+l+r;        
    }
    
    int uniquePathsIII(vector<vector<int>>& grid) 
    {
        int n = grid.size();
        int m = grid[0].size();
        int s,e,c=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    s=i;
                    e=j;
                }
                if(grid[i][j]==0)
                {
                    c++;
                }
            }
        
        return path(n,m,s,e,c,0,grid);
    }
};