class Solution {
  public:
    vector<vector<int>> nearest(vector<vector<int>>& grid) {
        // code here
        int n = grid.size();
        int m = grid[0].size();
        queue<vector<int>> que;
        vector<vector<int>> visited(n,vector<int>(m,0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    que.push({i,j,0});
                    visited[i][j]=1;
                }
            }
        }
        vector<vector<int>> possible = {{0,1},{0,-1},{-1,0},{1,0}};
        vector<vector<int>> result(n,vector<int>(m,-1));
        while(!que.empty())
        {
            int i = que.front()[0];
            int j = que.front()[1];
            int distance = que.front()[2];
            result[i][j] = distance;
            que.pop();
            for(int l = 0;l<possible.size();l++)
            {
                int newi = possible[l][0] + i;
                int newj = possible[l][1] + j;
                if(newi >= 0 && newi < n && newj >=0 && newj < m && visited[newi][newj] != 1 )
                {
                    visited[newi][newj] = 1;
                    que.push({newi,newj,distance+1});
                }
            }
        }
        return result;
    }
};

       