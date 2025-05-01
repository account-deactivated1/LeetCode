class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int initial = 0;
        for (int i = 0; i < gain.size(); i++) {
            initial = initial + gain[i];
            gain[i] = initial;
        };
       int mxEle = 0;
        for(int i=0;i<gain.size();i++){
            if (mxEle < gain[i])  mxEle = gain[i];
       };
       return mxEle;
    }
};