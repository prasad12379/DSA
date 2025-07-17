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
    vector<int> preorderTraversal(TreeNode* root) {
       
        stack<TreeNode* > st;
        TreeNode* node=root;
        vector<int> ans;

        while(node){
            ans.push_back(node->val);
            if(node->right) st.push(node->right);
            node=node->left;
            if(!node && !st.empty()){
                node=st.top();
                st.pop();
            }
        }
        return ans;
    }
};
