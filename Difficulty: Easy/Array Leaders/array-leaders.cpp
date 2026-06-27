class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        int n = arr.size();
        int first = n-1;
        vector<int> ans;
        ans.push_back(arr[first]);
        for(int i = n-2;i>=0;i--)
        {
            if(arr[i]>=arr[first])
            {
                ans.push_back(arr[i]);
                first = i;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};