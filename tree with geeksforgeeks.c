#include<stdio.h>
struct tree{
int data;
struct tree *left;
struct tee *right;
};
struct tree * newnode(int data){
struct tree* node=(struct tree *)malloc(sizeof(struct tree));
node->data=data;
node->left=NULL;
node->right=NULL;
return(node);
}
void inorder(struct tree* root){
if(root==NULL)
    return;
inorder(root->left);
printf("%d ",root->data);
inorder(root->right);
}
void preorder(struct tree *root){
    if(root==NULL)
        return;
printf("%d  ",root->data);
preorder(root->left);
preorder(root->right);
}

int main(){
struct tree * root=newnode(1);
root->left=newnode(2);
root->right=newnode(3);
root->left->left=newnode(4);
root->left->right=newnode(5);
inorder(root);
printf("\n");
preorder(root);
}
