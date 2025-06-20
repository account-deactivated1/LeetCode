class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int left = 0;
        int right = n-1;
        int index = n-1;
        vector<int> squares(n);
        while(left<=right){
            int leftSqr = nums[left] * nums[left];
            int rightSqr = nums[right] * nums[right];
            if(leftSqr > rightSqr){
                squares[index] = leftSqr;
                index--;
                left++;    
            }else{
                squares[index] = rightSqr;
                index--;
                right--;
            }
        };
        return squares;
    };
};