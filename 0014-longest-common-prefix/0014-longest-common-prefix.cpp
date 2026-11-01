class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        sort(strs.begin(),strs.end());
        string st=strs[0];
        string end=strs[strs.size()-1];
        string ans="";
        for(int i=0;i<min(st.size(),end.size());i++){
            if(st[i]!=end[i]){
                break;
            }else{
                ans+=st[i];
            }
        }
        return ans;
    }
};