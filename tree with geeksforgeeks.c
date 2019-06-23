#include<stdio.h>
struct tree{
int data;
struct tree *left;
struct tree *right;};
struct tree * stack[100];
int top=-1;
struct tree * q[100];
int front=0,rear=0;
void insertqueue(struct tree * root){
    q[rear]=root;
    rear++;
    }
struct tree * delete1(){
struct tree * temp;
int i;
temp=q[front];
for(i=front;i<rear-1;i++)
    q[i]=q[i+1];
rear--;
return temp;
}
void push(struct tee * root){
stack[++top]=root;
}/*
struct tree * FindMax(struct tree * root ){
struct tree * temp,*p;
temp=root;
int x,y;


}*/
/*struct tree * delete2(struct tree * root,int data){
struct tree *temp;
if(root==NULL)
    printf("No such Element Exist\n");
else if(data>root->data)
    root->right=delete2(root->right,data);
else if(data<root->data)
    root->left=delete2(root->left,data);
else{
    if(root->left&&root->right){
        temp=FindMax(root->left);
        root->data=temp->data;
        root->left=delete2(root->left,root->data);
    }
    else{
        temp=root;
        if(root->left==NULL)
            root=root->right;
        if(root->right==NULL)
            root=root->left;
        free(temp);

    }
    }
    return(root);
}*/
void pop(){
printf("%d",(stack[top]->data));
top--;
}
void levelorder(struct tree * root){
struct tree *  temp_node=root;
while(temp_node!=NULL){
    printf("%d ",temp_node->data);
    insertqueue(temp_node->left);
    insertqueue(temp_node->right);
    temp_node=delete1();
}


}
/*void inorder1(struct node * root){

while(curr){
    push(curr);
    curr=curr->left;
}
if(curr==NULL&&top==-1){
pop();
curr=curr->right;
}
}*/
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
printf("1. Insertion\n2. InOrder\n3. PreOrder\n4. PostOrder\n5. Level Order Traversal\n6. Exit");
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
    levelorder(root);
    printf("\n");
    break;
case 6:
    exit(0);
default:
    printf("Inavlid Input\n");
}
}
}
