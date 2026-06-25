class Solution {
  public:
    bool magicSquare(vector<vector<int>>& mat) {
        
        // code here
         int n = mat.size();
        vector<bool> vis(n*n + 1, false);

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                int x = mat[i][j];
        
                if(x < 1 || x > n*n)
                    return false;
        
                if(vis[x])
                    return false;
        
                vis[x] = true;
            }
        }
        
       

        for(int i = 0; i < n; i++)
        {
            if(mat[i].size() != n)
                return false;
        }
        
        int target = 0;
        for(int j=0;j<mat[0].size();j++)
        {
            target += mat[0][j];
        }
        
        // for each row
        for(int i=1;i<mat.size();i++)
        {
            int sum = 0;
            for(int j = 0;j<mat[0].size();j++)
            {
                sum += mat[i][j];
            }
            if(sum!=target) return false;
        }
        // for each column
        for(int j = 0;j<mat[0].size();j++)
        {
            int sum = 0;
            for(int i=0;i<mat.size();i++)
            {
                sum += mat[i][j];
            }
            
            if(sum != target) return false;
        }
        int sum = 0;
        //for first diagonal
        for(int i=0;i<mat.size();i++)
        {
            sum += mat[i][i];
        }
        if(sum!=target) return false;
        // for second diagonal
        int add = 0;
        for(int i=0;i<mat.size();i++)
        {
            add += mat[i][n-i-1];
        }
        if(add!=target)return false;
        
        return true;
    }
};