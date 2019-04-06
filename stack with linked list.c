#include<stdio.h>
void push(void);
void pop(void);
void traversal(void);
struct node{
int data;
 struct node *next;
 };
struct node *top=NULL;
void push(){
struct node *temp;
temp=(struct node *)malloc(sizeof(struct node));
printf("\nnter stack element :- ");
scanf("%d",&temp->data);
temp->next=top;
top=temp;
}
void pop(){
struct node *temp;
temp=top;
if(temp==NULL)
    printf("No elements to delete.\n");
else{
    printf("%d is removed from stack\n",temp->data);
    top=top->next;
    temp->next=NULL;
    free(temp);
}
}
void traversal(){
struct node *temp;

if(top==NULL)
    printf("stack is empty\n");
else{
    temp=top;
    printf("The elements in stack are :- ");
    while(temp!=NULL){
    printf("%d ",temp->data);
    temp=temp->next;
}
}
}
int main(){
int i,ch;
while(1){
printf("\n1. Push an Element\n2. Pop an Element\n3. Traversing the stack\n4. Quit\nEnter you choice :- ");
scanf("%d",&ch);
switch(ch){
case 1:
    push();
    break;
case 2:
    pop();
    break;
case 3:
    traversal();
    break;
case 4:
    exit(1);
    break;
default:
    printf("Invalid Input.\n");
}
}
}
