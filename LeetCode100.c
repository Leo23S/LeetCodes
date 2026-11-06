/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if (p != NULL && q != NULL){
        if (p->val != q->val){
            return false;
        }

        if (p->left != NULL && q->left != NULL){
            if (isSameTree(p->left, q->left) == false){
                return false;
            }
        }else if (p->left != NULL || q->left != NULL){
            return false;
        }

        if (p->right != NULL && q->right != NULL){
            if (isSameTree(p->right, q->right) == false){
                return false;
            }
        }else if (p->right != NULL || q->right != NULL){
            return false;
            }
    }else if (p != NULL || q != NULL){
        return false;
    }
    return true;
}
