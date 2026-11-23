class Solution {
public:
    string helper(int num,string st, int n){
        if(num==n) return st;
        char ch=st[0];
        int s=st.size();
        int count=1;
        string temp="";
        for(int i=1;i<s;i++){
            if(ch!=st[i]){
                temp+=to_string(count);
                temp+=ch;
                ch=st[i];
                count=1;
                continue;
            }
            count++;
        }
        temp+=to_string(count);
        temp+=ch;
        return helper(num+1,temp,n);
    
    }
    string countAndSay(int n) {
        string ans="1";
        return helper(1,ans,n);
        
    }
};