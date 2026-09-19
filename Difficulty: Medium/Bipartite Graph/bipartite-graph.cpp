class Solution {
    private:
    bool dfs(int node,int co,vector<vector<int>> &adj,vector<int> &col)
    {
        col[node] = co;
        for(auto it:adj[node])
        {
            if(col[it]==-1)
            {
                if(!dfs(it,1-co,adj,col))
                {
                    return false;
                }
            }
            else if(col[it]==col[node])
            {
                return false;
            }
        }
        return true;
    }
    
    
  public:
    bool isBipartite(int V, vector<vector<int>> &edges) {
        // Code here
        vector<int> col(V,-1);
        vector<vector<int>> adj(V);
        for(auto it:edges)
        {
            int u = it[0];
            int v = it[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        for(int i=0;i<V;i++)
        {
            if(col[i] == -1)
            {
                if(dfs(i,0,adj,col)==false)
                {
                    return false;
                }
            }
        }
        return true;
    }
};