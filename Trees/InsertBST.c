#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* createNode(int val) {
    struct TreeNode* nn = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    nn->val = val;
    nn->left = NULL;
    nn->right = NULL;
    return nn;
}

struct TreeNode* insertIntoBST(struct TreeNode* root, int val) {
    struct TreeNode* nn = createNode(val);
    if (root == NULL) return nn;

    struct TreeNode* t = root;
    while (1) {
        if (val <= t->val) {
            if (t->left == NULL) {
                t->left = nn;
                break;
            }
            t = t->left;
        } else {
            if (t->right == NULL) {
                t->right = nn;
                break;
            }
            t = t->right;
        }
    }
    return root;
}
