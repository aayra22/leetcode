class Solution {
public:
  void  generateStr(int n, string& str, vector<string>& ans , int first , int last){
        if(first == n && last == n){
            ans.push_back(str);
            return;
        }
       if(first < n){
            str.push_back('(');
            generateStr(n, str, ans, first + 1, last);
            str.pop_back(); // backtrack for preventing from TLE every time new copy is creating
        }

        if(first > last){
            str.push_back(')');
            generateStr(n, str, ans, first, last + 1);
            str.pop_back(); // backtrack
        }

    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        int first =0, last =0;
        string str = "";
        generateStr(n,str,ans,first,last);
        return ans;
    }
};