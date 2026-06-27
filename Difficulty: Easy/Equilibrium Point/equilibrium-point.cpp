class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        // code here
        int total = 0;
        for(auto it:arr)
        {
            total += it;
        }
        int left = 0;
        for(int i=0;i<arr.size();i++)
        {
            if(left == total-left-arr[i]) return i;
            left  += arr[i];
        }
        return -1;
    }
};