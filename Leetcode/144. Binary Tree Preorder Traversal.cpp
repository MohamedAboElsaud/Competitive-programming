class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*>st;
        while (root || !st.empty()) {
            if (root) {
                res.push_back(root -> val);
                if (root -> right) {
                    st.push(root -> right);
                }
                root = root -> left;
            } else {
                root = st.top();
                st.pop();
            }
        }
        return res;
    
    }
};