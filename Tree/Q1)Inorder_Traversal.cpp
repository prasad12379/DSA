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
    vector<int> inorderTraversal(TreeNode* root) {
        TreeNode* node=root;
        vector<int> ans;
        stack<TreeNode* > st;
        int cnt=0;

        while(node || !st.empty()){
            while(node){
                st.push(node);
                node=node->left;
            }
          
           node=st.top();
           st.pop();
            ans.push_back(node->val);
            node=node->right;
            
            }
        


                
            
        
        return ans;
        
    }
};
