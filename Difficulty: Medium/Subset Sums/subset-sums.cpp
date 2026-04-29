class Solution {
  public:
  
  void sumi(int ind,int sum,vector<int>&arr,vector<int>&ans){
      if(ind>=arr.size()){
          ans.push_back(sum);
          return;
      }
      
      sumi(ind+1,sum+arr[ind],arr,ans);
      sumi(ind+1,sum,arr,ans);
  }
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        vector<int>ans;
        sumi(0,0,arr,ans);
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};