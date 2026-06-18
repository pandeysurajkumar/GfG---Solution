class Solution {
    private:
    void dfs(int node,vector<vector<int>>& adj,int vis[],vector<int>&ans)
    {
        vis[node] = 1;
        ans.push_back(node);
        for(int it: adj[node])
        {
            if(!vis[it])
            {
                dfs(it,adj,vis,ans);
            }
        }
    }
  public:
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int v = adj.size();
        int vis[v] = {0};
        vector<int> ans;
        dfs(0,adj,vis,ans);
        return ans;
    }
};