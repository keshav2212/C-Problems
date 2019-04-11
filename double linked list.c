#include<stdio.h>
void addatafter(void);
void addatbegin(void);
void printdata(void);
void swap(void);
void reverse_node(void);
int length(void);
void append(void);
void deletenode(void);
struct node{
int data;
struct node *prev;
struct node *next;
};
struct node *root=NULL;
void append(){
struct node *temp;
temp=(struct node *)malloc(sizeof(struct node));
printf("Enter node data :- ");
scanf("%d",&temp->data);
temp->prev=NULL;
temp->next=NULL;
if(root==NULL){
    root=temp;
}
else{
    struct node *p;
    p=root;
    while(p->next!=NULL){
        p=p->next;
    }
    temp->prev=p;
    p->next=temp;
}
}
void printdata(){
struct node *temp;
temp=root;
if(root==NULL)
printf("List is Empty");
else{
    while(temp!=NULL){
        printf("%d--> ",temp->data);
        temp=temp->next;
}
}
printf("\n");
}
void addatbegin(){
struct node *temp;
temp=(struct node *)malloc(sizeof(struct node));
printf("Enter node data :- ");
scanf("%d",&temp->data);
temp->next=NULL;
temp->prev=NULL;
if(root==NULL){
root=temp;
}
else{
    temp->next=root;
    root->prev=temp;
    root=temp;
}
}
void deletenode(){
int i;
struct node *temp,*p,*q;
printf("Enter the node data which you want to delete : - ");
scanf("%d",&i);
temp=root;
while(temp!=NULL){
    if(temp->data==i)
        break;
    else if(temp==NULL){
        printf("The Value is not present in linked list.\n");
        break;
    }
    else
        temp=temp->next;
}
if(temp!=NULL){
p=temp->next;
q=temp->prev;
p->prev=q;
q->next=p;
}
}
int length(){
struct node *temp;
temp=root;
int count=0;
while(temp!=NULL){
    count++;
    temp=temp->next;
}
return count;
}
void addatafter(){
struct node *temp,*p;
int i=1,data,loc;
printf("\nEnter location after which you want to add new node :- ");
scanf("%d",&loc);
if(loc>length())
    printf("Invalid Location.\n");
else{
    temp=(struct node *)malloc(sizeof(struct node));
    printf("Enter Node data :- ");
    scanf("%d",&temp->data);
        temp->next=NULL;
        temp->prev=NULL;
        p=root;
        while(i<loc){
            p=p->next;
            i++;
        }
        temp->next=p->next;
        p->next->prev=temp;
        temp->prev=p;
        p->next=temp;
}
}
void swap(){
int i=1,loc;
printf("Enter the location which adjacent node you want to swap :- ");
scanf("%d",&loc);
struct node *temp,*q,*r;
temp=root;
while(i<loc-1){
    temp=temp->next;
    i++;
}
q=temp->next;
r=q->next;
q->next=r->next;
q->prev=r;
r->next=q;
r->prev=temp;
temp->next=r;
}
void reverse_node(){
struct node *q,*temp;
int i=0,k,j,loc;
j=length()-1;
q=temp=root;
while(i<j){
    k=0;
    while(k<j){
        q=q->next;
        k++;
    }
    loc=q->data;
    q->data=temp->data;
    temp->data=loc;
i++;j--;
temp=temp->next;
q=root;
}
}
void main(){
    int i,l;
while(1){
    printf("Singly Linked List Operations\n");
    printf("1. Append\n");
    printf("2. Add at begining\n3. Add at After\n4. Length\n5. Display\n6. Swap\n7. Reverse List\n8. Delete\n9. Quit\nEnter Your Choice :- ");
    scanf("%d",&i);
    switch(i){
case 1:
    append();
    break;
case 2:
    addatbegin();
    break;
case 3:
    addatafter();
    break;
case 4:
    l=length();
    printf("The length of Node is %d\n\n",l);
    break;
case 5:
    printdata();
    break;
case 6:
    swap();
    break;
case 7:
    reverse_node();
    break;
case 8:
    deletenode();
    break;
case 9:
    exit(1);
default:
    printf("Wrong Input!");
    break;
    }
}
}
