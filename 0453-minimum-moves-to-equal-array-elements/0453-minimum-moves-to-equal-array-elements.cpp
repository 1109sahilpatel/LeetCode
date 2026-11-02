class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int minVal=nums[0];
        int ans=0;
        for(int val:nums){
            ans+=(val-minVal);
        }
        return ans;
    }
};