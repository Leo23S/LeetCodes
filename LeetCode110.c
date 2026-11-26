/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 
int Altura(struct TreeNode* root){
    int heightLeft = 0;
    int heightRight = 0;
    if (root == NULL){
        return 0;
    }

    heightLeft = Altura(root->left);
    heightRight = Altura(root->right);

    if (heightLeft > heightRight ){
        return heightLeft + 1;
    }else{
        return heightRight + 1;
    }
}

int FB(struct TreeNode* root){
    if (root == NULL){
        return 0;
    }

    return Altura(root->left) - Altura(root->right);
}

bool isBalanced(struct TreeNode* root) {
    if (root == NULL){
        return true;
    }

    if (FB(root) < -1 || FB(root) > 1){
        return false;
    }
    if (root->left != NULL){
        if (isBalanced(root->left) == false){
            return false;
        }
    }
    if (root->right != NULL){
        if (isBalanced(root->right) == false){
            return false;
        }
    }
    return true;
}
