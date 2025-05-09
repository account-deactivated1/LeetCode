class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> Duplicate;
        for (auto a : nums) {
            if (Duplicate.find(a) != Duplicate.end()) {
                return true;
            } else {
                Duplicate.insert(a);
            }
        };
        return false;
    }
};