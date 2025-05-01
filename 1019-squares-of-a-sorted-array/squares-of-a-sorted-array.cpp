class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int left = 0, right = n - 1;
        int index = n - 1;
        vector<int> result(n);

        while (left <= right) {
            int leftSqr = nums[left] * nums[left];
            int rightSqr = nums[right] * nums[right];
            if (leftSqr > rightSqr) {
                result[index--] = leftSqr;
                left++;
            } else {
                result[index--] = rightSqr;
                right--;
            }
        }

        return result;
    }
};
