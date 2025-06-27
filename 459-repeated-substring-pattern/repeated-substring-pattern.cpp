class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string t = s + s;                           
        string trimmed = t.substr(1, t.size() - 2); 
        return trimmed.find(s) != -1;              
    }
};