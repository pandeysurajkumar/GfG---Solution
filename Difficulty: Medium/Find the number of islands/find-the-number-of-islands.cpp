class Solution {
    private:
    vector<vector<int>> possible = {{-1,0},{1,0},{0,-1},{0,1},{-1,-1},{1,1},{-1,1},{1,-1}};
    void bfs(vector<vector<char>>& grid,vector<vector<int>> &visited,int row,int col)
    {
        visited[row][col] = 1;
        queue<pair<int,int>>que;
        int n = grid.size();
        int m = grid[0].size();
        que.push({row,col});
        while(!que.empty())
        {
            int curr = que.front().first;
            int curc = que.front().second;
            que.pop();
            for(int i = 0;i<possible.size();i++)
            {
                int newr = curr + possible[i][0];
                int newc = curc + possible[i][1];
                if(newr >= 0 && newr<n && newc >=0 && newc<m && grid[newr][newc] == 'L' && visited[newr][newc]==0)
                {
                    visited[newr][newc]=1;
                    que.push({newr,newc});
                }
            }
        }
    }
    
    
    
  public:
    int countIslands(vector<vector<char>>& grid) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        vector<vector<int>> visited(n,vector<int>(m,0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='L' && !visited[i][j])
                {
                    count++;
                    bfs(grid,visited,i,j);
                }
            }
        }
        return count;
    }
};