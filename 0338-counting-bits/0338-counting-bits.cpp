class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++){
            int countBits=0;
            for(int j=0;j<=31;j++){
                if(i&(1<<j)) countBits++;
            }
            ans.push_back(countBits);
        }
        return ans;
    }
    
};