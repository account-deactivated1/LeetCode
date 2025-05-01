class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> map;
        int counter = 0;
        for (auto ch : jewels) {
            map.insert(ch);
        };
        for (auto ch : stones) {
            if (map.find(ch) != map.end()) {
                counter++;
            }
        };
        return counter;
    }
};