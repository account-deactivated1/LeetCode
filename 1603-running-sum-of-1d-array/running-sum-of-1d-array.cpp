class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
         int n = nums.size();
        vector<int>  Sum1DArray;
        vector<int> Findsum(n);
        for(int i=0;i<n;i++){
            sum = sum + nums[i];
            Sum1DArray.push_back(sum);            
        };
        return Sum1DArray;      
    }
};