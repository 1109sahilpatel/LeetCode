class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int median=0;
        sort(nums.begin(),nums.end());
        int mid=(nums.size()-1)/2;
        if(nums.size()%2!=0){
            median=nums[mid];
        }else{
            median=(nums[mid]+nums[mid+1])/2;
        }
        int ans=0;
        for(int val:nums){
            if(median>val){
                ans+=(median-val);
            }else{
                ans+=(val-median);
            }
        }
        return ans;
    }
};