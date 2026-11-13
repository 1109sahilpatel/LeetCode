class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int st=0,end=nums.size()-1;
        vector<int> ans(2,-1);
        while(st<=end){
            int mid = st + (end - st) / 2;
            if(nums[mid]==target){
                ans[0]=mid;
                ans[1]=mid;
                int k=mid;
                int m=mid;
                while(st<=k){
                    int mid1=st+(k-st)/2;
                    if(nums[mid1]==target){
                        ans[0]=mid1;
                         k=mid1-1;
                    }else{
                        st=mid1+1;
                    }
                }
                while(m<=end){
                    int mid2=m+(end-m)/2;
                    if(nums[mid2]==target){
                        ans[1]=mid2;
                        m=mid2+1;
                    }else {
                        end=mid2-1;
                    }
                }

                break;
            }else if(nums[mid]>target){
                end=mid-1;
            }else{
                st=mid+1;
            }
        }
        return ans;
    }
};