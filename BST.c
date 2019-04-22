#include<stdio.h>
struct node{
int data;
struct node *left;
struct node *right;
};
struct node *root=NULL;
void insert(){
struct node *temp;
temp=(struct node *)malloc(sizeof(struct node ));
printf("Enter node data :- ");
scanf("%d",&temp->data);
temp->left=NULL;
temp->right=NULL;
if(root=NULL)
    root=temp;
else{
    struct node *p,*curr;
    p=root;
    curr=root;
    while(curr){
    p=curr;
    if(temp->data>curr->data)
        curr=curr->right;
    else
        curr=curr->left;
    }
    if(temp->data>p->data)
        p->right=temp;
    else
        p->left=temp;
}
}
void delete0(){
struct node *curr,*p;
p=root;
curr=root;
while(curr){
    p=curr;
    if()
}
}
int main(){
int i;
}
