class Solution {
    public:
   void dfs(int row,int col,vector<vector<char>>& grid,
            vector<vector<int>>&vis,vector<pair<int,int>>& vec,
            int row0,int col0)
  {
        int n = grid.size();
        int m = grid[0].size();
        vis[row][col] = 1;
        vec.push_back({row-row0,col-col0});
        int dir_r[] = {-1,0,1,0};
        int dir_c[] = {0,1,0,-1};
        for(int i=0;i<4;i++)
        {
            int newr = row + dir_r[i];
            int newc = col + dir_c[i];
            
            if(newr<n && newr>=0 && newc<m && newc >=0 && !vis[newr][newc] && grid[newr][newc]=='L')
            {
                dfs(newr,newc,grid,vis,vec,row0,col0);
                
            }
        }
  }
    
    
  public:
    int countDistinctIslands(vector<vector<char>>& grid) {
        // code here
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>vis (n,vector<int>(m,0));
        set<vector<pair<int,int>>> st;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!vis[i][j] && grid[i][j] == 'L')
                {
                    vector<pair<int,int>> vec;
                    dfs(i,j,grid,vis,vec,i,j);
                    st.insert(vec);
                }
            }
        }
        return st.size();
    }
};
