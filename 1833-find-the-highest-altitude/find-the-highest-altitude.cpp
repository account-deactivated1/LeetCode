class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int netGain = 0;
        int maxEle = 0;
        for(int i=0;i<gain.size();i++){
            netGain = netGain + gain[i];
          
            if(maxEle < netGain){
                maxEle = netGain;
            };
        };
        return maxEle;        
    }
};