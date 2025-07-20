class Solution {
public:
     void findSubset(int i,vector<int>arr, vector<int>& nums,vector<vector<int>>& ans){

        if(i == nums.size()){
            ans.push_back(arr);
            return ;
        }
           arr.push_back(nums[i]);
         findSubset(i+1,arr,nums,ans);
         arr.pop_back();
          findSubset(i+1,arr,nums,ans);
     }




    vector<vector<int>> subsets(vector<int>& nums) {
           vector<vector<int>> ans;
           vector<int>arr;
           findSubset(0,arr,nums,ans);
           return ans;
    }
};