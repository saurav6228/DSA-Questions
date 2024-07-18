class Solution {
public:
    vector<vector<int>> ans;
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> path;
        work(root, targetSum, path);
        return ans;
    }

    void work(TreeNode* root, int targetSum, vector<int> path){
        if(root == NULL) return;

         path.push_back(root->val);

        if(root->val == targetSum && root->left==NULL && root->right==NULL) {
            ans.push_back(path);
        }
        work(root->left, targetSum - root->val, path);
        work(root->right, targetSum - root->val, path);

        path.pop_back();
    }
};
