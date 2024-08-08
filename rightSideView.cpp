    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*> q;
        vector<int> ans;

        if(root == NULL) return ans;
        q.push(root);

        while(!q.empty()) {
            int sz = q.size();
            while(sz-- > 0) {
                TreeNode* node = q.front();
                q.pop();
                if(sz == 0) ans.push_back(node->val);
                if(node->left != NULL) q.push(node->left);
                if(node->right != NULL) q.push(node->right);
            }
        }
        return ans;
    }
