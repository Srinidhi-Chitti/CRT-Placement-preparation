#include<stdio.h>
void postorder(node* root){
    if(root){
        postorder(root-> left);
        postorder(root-> right);
        printf(root-> data);
    }
}