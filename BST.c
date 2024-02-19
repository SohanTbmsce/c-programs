#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *left_child;
struct node *right_child;
};

struct node *new_node(int x){
struct node *temp=malloc(sizeof(struct node));
temp->data=x;
temp->left_child=NULL;
temp->right_child=NULL;
return temp;
}

struct node * insert(struct node * root,int x){
if(root==NULL){
   return new_node(x);
}
else if(x>root->data){
    root->right_child=insert(root->right_child,x);
}
else{
    root->left_child=insert(root->left_child,x);
}
}

void inorder(struct node *root){
if(root!=NULL){
    inorder(root->left_child);
    printf("%d->",root->data);
    inorder(root->right_child);
}

}
void preorder(struct node *root){
if(root!=NULL){
    printf("%d->",root->data);
     preorder(root->left_child);
    preorder(root->right_child);
}

}

void postorder(struct node *root){
if(root!=NULL){
    postorder(root->right_child);
    postorder(root->left_child);
    inorder(root->right_child);
}

}

int main(){
    struct node * root=NULL;
    root=insert(root,20);
    insert(root,30);
    insert(root,5);
    insert(root,7);
    insert(root,40);
    insert(root,50);

    inorder(root);
    printf("\n");
    preorder(root);
    printf("\n");
    postorder(root);
    printf("\n");
}


