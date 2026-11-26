/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool hasPathSum(struct TreeNode* root, int targetSum) {
    if (root == NULL){
        return false;
    }

    if (root->left != NULL){
        if (hasPathSum(root->left, targetSum - root->val) == true){
            return true;
        }
    }

    if (root->right != NULL){
        if (hasPathSum(root->right, (targetSum - root->val)) == true){
            return true;
        }
    }
    
    if (root->left == NULL && root->right == NULL && root->val == targetSum ){
        return true;
    }
    return false;
}
