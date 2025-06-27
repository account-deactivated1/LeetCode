class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) return false;

        int sChar[256] = {0};
        int tChar[256] = {0};

        for (int i = 0; i < s.length(); i++) {
            char c1 = s[i];
            char c2 = t[i];

            // +1 because default values are 0, and index can also be 0
            if (sChar[c1] != tChar[c2])
                return false;

            sChar[c1] = i + 1;
            tChar[c2] = i + 1;
        }

        return true;
    }
};
