/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int Altura(struct TreeNode* root){
    int iEsq = 0;
    int iDir = 0;

    if (root == NULL){
        return 0;
    }
    iEsq = Altura(root->left);
    iDir = Altura(root->right);

    if (iEsq > iDir){
        return iEsq + 1;
    }else{
        return iDir + 1;
    }
}

int FB(struct TreeNode* root){
    if (root == NULL){
        return 0;
    }
    return Altura(root->left) - Altura(root->right);
}

struct TreeNode* balanceBST(struct TreeNode* root) {
    struct TreeNode* aux;
    if (FB(root) < -1){
        aux = root->right;
        root->right = aux->left;
        aux->left = root;
        root = aux;
    } 
    
    if (FB(root) > 1){
        aux = root->left;
        root->left = aux->right;
        aux->right = root;
        root = aux;
    }
    if (root->left != NULL){
        balanceBST(root->left);
    }
    if (root->right != NULL){
        balanceBST(root->right);
    }
    return root;
}

