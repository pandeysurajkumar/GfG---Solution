class Solution {
  public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int newColor) {
        // code here

        if (image[sr][sc] == newColor) {
            return image;
        }
        
        vector<pair<int,int>> dir = {{-1,0},{1,0},{0,-1},{0,1}};
        int r = image.size();
        int c = image[0].size();
        
        queue<pair<int,int>> que;
        
        int oldcolour = image[sr][sc];
        image[sr][sc] = newColor;
        que.push({sr,sc});
        while(!que.empty())
        {
            int x = que.front().first;
            int y = que.front().second;
            que.pop();
            for(auto &it:dir)
            {
                int newx = x + it.first;
                int newy = y + it.second;
            
                if(newx >= 0 && newx < r && newy>=0 && newy< c && image[newx][newy] == oldcolour)
                {
                    image[newx][newy]=newColor;
                    que.push({newx,newy});
                }
            }
        }
        return image;
    }
};