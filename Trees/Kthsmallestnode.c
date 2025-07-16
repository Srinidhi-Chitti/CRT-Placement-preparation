#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct Context {
    int val;
    int count;
};

void inorder(struct TreeNode* root, int k, struct Context* ctx) {
    if (root == NULL || ctx->count >= k) return;

    inorder(root->left, k, ctx);

    ctx->count++;
    if (ctx->count == k) {
        ctx->val = root->val;
        return;
    }

    inorder(root->right, k, ctx);
}

int kthSmallest(struct TreeNode* root, int k) {
    struct Context ctx = {0, 0};
    inorder(root, k, &ctx);
    return ctx.val;
}
