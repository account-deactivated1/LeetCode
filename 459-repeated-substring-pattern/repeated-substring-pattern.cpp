class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string a = s + s;
        string b = a.substr(1,a.size()-2);
        return b.find(s) != -1;   // true                         
    }
};