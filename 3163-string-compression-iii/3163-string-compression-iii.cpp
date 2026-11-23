class Solution {
public:
    string compressedString(string word) {
        char ch=word[0];
        int count=1;
        string ans="";
        for(int i=1;i<word.size();i++){
            if(ch!=word[i]  || count==9){
                ans+=to_string(count);
                ans+=ch;
                count=1;
                ch=word[i];
                continue;
            }
            count++;
        }
        ans+=to_string(count);
        ans+=ch;
        return ans;
    }
};