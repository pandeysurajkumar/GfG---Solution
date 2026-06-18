class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        int v = adj.size();
        vector<bool> visited(v,false);
        queue<int> q;
        vector<int> ans;
        q.push(0);
        visited[0]=true;
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            ans.push_back(node);
            for(auto it: adj[node])
            {
                if(!visited[it])
                {
                    q.push(it);
                    visited[it] = true;
                }
            }
        }
        return ans;
        
    }
};