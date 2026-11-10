class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxOne=0;
        for(int val:nums){
            if(val==1){
                count++;
                maxOne=max(maxOne,count);
            }else{
                count=0;
            }
        }
        return maxOne;
    }
};