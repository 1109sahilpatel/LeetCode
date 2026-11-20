class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int maxArea=0;
        int n=heights.size();
        vector<int> nextSmaller(n,0);
        vector<int> prevSmaller(n,0);
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(st.size()>0 && heights[st.top()]>=heights[i]){
                st.pop();
            }
            nextSmaller[i]=st.empty()?n:st.top();
            st.push(i);
        }
        while(!st.empty()){
            st.pop();
        }
        for(int i=0;i<n;i++){
            while(st.size()>0 && heights[st.top()]>=heights[i]){
                st.pop();
            }
            prevSmaller[i]=st.empty()?-1:st.top();
            st.push(i);
        }
        for(int i=0;i<n;i++){
            int height=heights[i];
            int width=nextSmaller[i]-prevSmaller[i]-1;
            maxArea=max(maxArea,height*width);
        }
        return maxArea;
    }
};