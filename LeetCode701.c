/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* insertIntoBST(struct TreeNode* root, int val) {
    struct TreeNode* aux;
    
    if (root == NULL){
        root = malloc(sizeof(struct TreeNode));
        root->val = val;
        root->left = NULL;
        root->right = NULL;
        return root;
    }
    if (root->val > val){
        if (root->left == NULL){
            root->left = insertIntoBST(root->left, val);
        }else{insertIntoBST(root->left, val);}
    }else{
        if (root->right == NULL){
                root->right = insertIntoBST(root->right, val);
        }else{insertIntoBST(root->right, val);}
    }
    return root;
}
