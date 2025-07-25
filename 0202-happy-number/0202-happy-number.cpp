class Solution {
public:
  int findSum(int n){
    int sum=0;
    while(n >0){
      int ele = n%10;
        sum += ele*ele;
        n = n/10;
    }
    return sum; 
  }

    bool isHappy(int n) {
      unordered_set<int> seen;
       while(n!=1){
        if(seen.find(n)!= seen.end()) return false;
        seen.insert(n);
        n= findSum(n);
       }
       return true;
    }
};