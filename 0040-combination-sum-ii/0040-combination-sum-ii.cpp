class Solution {
public:
   void findSubset(int i ,vector<int>& candidates, int sum,vector<int>& subsets, vector<vector<int>>& result){
    if(sum == 0){
       result.push_back(subsets);
       return;
    }
   
    if(i == candidates.size()){
    return;
    }
    if(sum <0) return;
      subsets.push_back(candidates[i]);
     findSubset(i+1,candidates, sum-candidates[i],subsets,result);
     subsets.pop_back();
     while(i+1 < candidates.size() && candidates[i] == candidates[i+1])
     {     
        i++;
     }
      findSubset(i+1,candidates, sum,subsets,result);
    
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
         vector<vector<int>> result;
        vector<int>subsets;
        sort(candidates.begin(),candidates.end());;
        findSubset(0,candidates ,target ,subsets,result);
        return result;
    }
};