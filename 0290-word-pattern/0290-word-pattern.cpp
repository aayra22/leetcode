class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string word;
        stringstream ss(s);

        while (ss >> word) {
            words.push_back(word); //something new 
        }

        
        if (pattern.length() != words.size()) return false;

        unordered_map<char, string> mp1;  
        unordered_map<string, char> mp2;  

        for (int i = 0; i < pattern.length(); i++) {
            char ch1 = pattern[i];
            string ch2 = words[i];

            if ((mp1.find(ch1) != mp1.end() && mp1[ch1] != ch2) ||
                (mp2.find(ch2) != mp2.end() && mp2[ch2] != ch1)) {
                return false;
            }

            mp1[ch1] = ch2;
            mp2[ch2] = ch1;
        }

        return true;

    }
};