class Solution {
public:
    bool issafe(vector<vector<int>>&place,int row,int col,int n){
        for(int j=0;j<n;j++){
            if(place[row][j]==1) return false;
        }
        for(int i=0;i<n;i++){
            if(place[i][col]==1) return false;
        }
        for(int i=row,j=col; i>=0 && j>=0;i--,j--){
            if(place[i][j]==1) return false;
        }
        for(int i=row,j=col;i>=0 && j<n;i--,j++){
            if(place[i][j]==1) return false;
        }
        return true;
    };
    void nqueen(vector<vector<int>>&place,int row,int col,int n,int& ans){
        if(row==n){
            ans+=1;
            return ;
        }
        for(int j=0;j<n;j++){
            if(issafe(place,row,j,n)){
                place[row][j]=1;
                nqueen(place,row+1,j,n,ans);
                place[row][j]=0;
            }
        }
    };
    int totalNQueens(int n) {
        int ans=0;
        vector<vector<int>> place(n,vector<int>(n));
        nqueen(place,0,0,n,ans);
        return ans;
    }
};