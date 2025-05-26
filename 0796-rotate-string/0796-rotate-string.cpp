class Solution {
public:
    bool rotateString(string s, string goal) {
        string concatenation = s+s;
        if(s.size()!= goal.size()){
            return false;
        }
        return concatenation.find(goal) != string::npos;
    }
};