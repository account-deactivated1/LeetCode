class Solution {
public:
    bool isAnagram(string s, string t) {
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