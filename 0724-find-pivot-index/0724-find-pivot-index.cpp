class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int total=0;
       for(int val:nums){
            total+=val;
       }
       int prefSum=0;
       for(int i=0;i<nums.size();i++){
            
            int rightSum=total-prefSum-nums[i];
            if(prefSum==rightSum){
                return i;
            }
            prefSum+=nums[i];
       }
       return -1;
    }
};