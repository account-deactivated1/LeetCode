class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        unordered_map <char,int> mapS;
        unordered_map <char,int> mapT;
        for(auto ch : s){
            mapS[ch]++;
        };
        for(auto ch:t){
            mapT[ch]++;
        };
        return mapS == mapT;   
    }
};