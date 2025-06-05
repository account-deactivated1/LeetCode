class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_set<int> seen(nums.begin(), nums.end());
        int counter = 0;
        for (int n : nums) {
            if (seen.count(n + diff) && seen.count(n + 2 * diff)) {
                counter++;
            }
        }
        return counter;
    }
};
