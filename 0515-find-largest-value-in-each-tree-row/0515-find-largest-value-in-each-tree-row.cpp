/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        if(root==NULL) return {};
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        vector<int>sol;
        int maxVal=INT_MIN;
        while(q.size()>0){
            TreeNode* curr=q.front();
            q.pop();
            if(curr==NULL){
                sol.push_back(maxVal);
                maxVal=INT_MIN;
                if(!q.empty()){
                    q.push(NULL);
                    continue;
                }else{
                    break;
                }
            }
            maxVal=max(maxVal,curr->val);
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
        }
        return sol;
    }
};