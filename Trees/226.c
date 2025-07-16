//inverted bunary tree
#include<stdio.h>
int main{
    TreeNode* invertTree(TreeNode* root){
        if(root){
            swap(root->left, root->right);
            invert(root->left);
            invert(root->right);
        }
        return root;
    }
}