class Solution {
  public:
    vector<vector<int>> printGraph(int V, vector<pair<int, int>>& edges) {
        // code here
        vector<vector<int>>graph(V);
        
        for(int i=0;i<edges.size();i++)
        {
            int a = edges[i].first;
            int b = edges[i].second;
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        return graph;
        
    }
};