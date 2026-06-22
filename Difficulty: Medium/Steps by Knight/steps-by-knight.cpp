class Solution {
  public:
  vector<vector<int>> co_ordinate = {{-2,-1},{-2,1},{-1,2},{1,2},{2,1},{2,-1},{-1,-2},{1,-2}};
  int helper(int s_r,int s_c,int d_r,int d_c,int n)
  {
      vector<vector<int>> visited(n,vector<int>(n,0));
      queue<pair<int,int>> q;
      q.push({s_r,s_c});
      visited[s_r][s_c] = 1;
      int steps = 0;
      while(!q.empty())
      {
        int qsize = q.size();
        while(qsize>0)
        {
            pair<int,int> p = q.front();
            q.pop();
            int r = p.first;
            int c = p.second;
            if(r==d_r && c == d_c) return steps;
            for(int i = 0 ;i<co_ordinate.size();i++)
            {
                int new_r = r + co_ordinate[i][0];
                int new_c = c + co_ordinate[i][1];
                if(new_r >=0 and new_c >= 0 and new_r<n && new_c<n && visited[new_r][new_c]==0)
                {
                    q.push({new_r,new_c});
                    visited[new_r][new_c] = 1;
                }
            }
            qsize-- ;
            
        }
        
        steps += 1;
      }
      return -1;
      
  }
  
  
  
  
  
  
  
    int minStepToReachTarget(vector<int>& knightPos, vector<int>& targetPos, int n) {
        // Code here
        int s_r = n-knightPos[1];
        int s_c = knightPos[0]-1;
        int d_r = n - targetPos[1];
        int d_c = targetPos[0]-1;
        
        return helper(s_r,s_c,d_r,d_c,n);
        
    }
};