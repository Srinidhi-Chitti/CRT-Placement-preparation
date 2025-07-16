#include<stdio.h>
void inorder(node*root){
    if(root){
        inorder(root-> left);
        printf(root->data);
        inorder(root-> right);
    }
}