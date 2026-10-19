class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> sol;
        int lessthanTarget=0;
        int count=0;
        for(auto val:nums){
            if((target^val)==0) count++;
            if(val<target) lessthanTarget++;
        }
        for(int i=lessthanTarget;i<=(lessthanTarget+count-1);i++){
            sol.push_back(i);
        }
        return sol;
    }
};