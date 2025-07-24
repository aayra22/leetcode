class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int num : arr){
            mp[num]++;
        }

        unordered_map<int,int>mp1;
        for(auto it = mp.begin(); it!=mp.end();++it){
            int ele = it->second;
            mp1[ele]++;
        }
        for(auto it = mp1.begin(); it!=mp1.end();++it){
            int ele = it->second;
          if(ele >1){
            return false;
          }
        }
        return true;
    }
};