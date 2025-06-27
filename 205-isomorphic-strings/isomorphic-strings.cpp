class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int sChar[256] = {0};
        int tChar[256] = {0};
        for (int i = 0; i < s.size(); i++) {
            char c1 = s[i];
            char c2 = t[i];
            if (sChar[c1] != tChar[c2])
                return false;
            sChar[c1] = i + 1;
            tChar[c2] = i + 1;
        };
        return true;
    };
};
