#include <stdbool.h>

// Assume TreeNode is already defined as:
// struct TreeNode {
//     int val;
//     struct TreeNode *left;
//     struct TreeNode *right;
// };

bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if (!p && !q) return true;
    if (!p || !q) return false;
    return (p->val == q->val) &&
           isSameTree(p->left, q->left) &&
           isSameTree(p->right, q->right);
}
