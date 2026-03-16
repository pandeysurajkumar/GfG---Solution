class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        int j = 0;
        
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] == 0) {
                arr[j++] = 0;
            }
        }

        while(j < arr.size()) {
            arr[j++] = 1;
        }
    }
};