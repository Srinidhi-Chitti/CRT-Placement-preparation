#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

bool preorder(struct TreeNode* root, long lb, long ub) {
    if (root == NULL) return true;
    if ((long)root->val <= lb || (long)root->val >= ub) return false;
    return preorder(root->left, lb, root->val) && preorder(root->right, root->val, ub);
}

bool isValidBST(struct TreeNode* root) {
    return preorder(root, (long)LONG_MIN - 1, (long)LONG_MAX);
}
