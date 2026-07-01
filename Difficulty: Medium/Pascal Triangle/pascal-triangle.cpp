class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        // code here
        vector<int> anss;
        anss.push_back(1);
        int ans=1;
        for(int i=1;i<n;i++)
        {
             ans = ans*(n-i);
             ans = ans/(i);
            anss.push_back(ans);
        }
        return anss;
    }
};
