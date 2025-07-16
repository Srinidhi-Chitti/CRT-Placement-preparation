#include<stdio.h>
void preorder(node* root){
    if(root){
        printf(root->data);
        preorder(root->left);
        preorder(root-> right);
    }
}