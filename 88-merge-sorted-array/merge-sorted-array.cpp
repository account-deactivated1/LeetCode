class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       for(int i=0;i<n;i++){
        nums1[m+i]= nums2[i];
       }
        sort(nums1.begin(),nums1.end());
    }
    //  here there is no need to return as the function type is void \U0001f618
};