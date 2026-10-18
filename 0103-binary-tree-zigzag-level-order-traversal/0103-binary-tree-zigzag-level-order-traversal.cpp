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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> sol;
        if(root==NULL) return sol;
        q.push(root);
        q.push(NULL);
        bool leftToRight=true;
        vector<int> temp;
        while(q.size()>0){
            TreeNode* curr=q.front();
            q.pop();
            if(curr==NULL){
                if(!leftToRight){
                    reverse(temp.begin(),temp.end());
                }
                sol.push_back(temp);
                leftToRight=!leftToRight;
                temp.clear();
                if(!q.empty()){
                    q.push(NULL);
                    continue;
                }
                else{
                    break;
                }
            }
            temp.push_back(curr->val);
            if(curr->left!=NULL){
                q.push(curr->left);
            }
            if(curr->right!=NULL){
                q.push(curr->right);
            }
        }
        return sol;
    }
};