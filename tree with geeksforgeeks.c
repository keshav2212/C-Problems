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
printf("%d ",root->data);
preorder(root->left);
preorder(root->right);
}
void postorder(struct tree* root){
if(root==NULL)
    return;
postorder(root->left);
postorder(root->right);
printf("%d ",root->data);
}
struct tree * insert(struct tree *root,int data){
struct tree * temp,*p,*curr;
temp=(struct tree *)malloc(sizeof(struct tree));
temp->data=data;
temp->left=NULL;
temp->right=NULL;
if(root==NULL)
    root=temp;
else{
    curr=root;
    while(curr){
    p=curr;
    if(curr->data>data){
     curr=curr->left;
     }
    else{
        curr=curr->right;
     }}
    if(temp->data>p->data)
        p->right=temp;
    else
        p->left=temp;
}
return root;
    }
int main(){
struct tree * root=NULL;
while(1){
printf("1. Insertion\n2. InOrder\n3. PreOrder\n4. PostOrder\n5. Exit");
printf("\n\nEnter your choice :- ");
int t,n;
scanf("%d",&t);
switch(t){
case 1:
    printf("Enter the data :- ");
    scanf("%d",&n);
    root=insert(root,n);
    break;
case 2:
    inorder(root);
    printf("\n");
    break;
case 3:
    preorder(root);
    printf("\n");
    break;
case 4:
    postorder(root);
    printf("\n");
    break;
case 5:
    exit(0);
default:
    printf("Inavlid Input\n");
}
}
}
