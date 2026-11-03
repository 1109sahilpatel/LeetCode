class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxVal=nums[nums.size()-1];
        int ans=0;
        for(int val:nums){
            ans+=(maxVal-val);
        }
        return ans;
    }
};