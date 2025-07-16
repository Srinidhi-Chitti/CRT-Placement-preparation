#include<stdio.h>
int s(struct node* root){
    if(root==NULL) return 0;
    return 1+S(root-> left) + S(root->right);
}
//complete tree node