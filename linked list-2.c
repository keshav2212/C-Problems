#include<stdio.h>
void addatafter(void);
void addatbegin(void);
void display(void);
void swap(void);
void reverse_list(void);
int length(void);
void append(void);
void deletenode(void);
struct node {
int data;
struct node * add;
};
struct node *root=NULL;
void append(){
struct node *temp;
temp=(struct node *)malloc(sizeof(struct node));
printf("Enter Node Data :- ");
scanf("%d",&temp->data);
temp->add=NULL;
if(root==NULL){
root=temp;
}
else{
struct node *p;
p=root;
while(p->add!=NULL){
p=p->add;
}
p->add=temp;
}
}
void swap(){
int i=1,loc;
struct node *p,*q,*r;
printf("Enter a location which two adjacent node you want to swipe :- ");
scanf("%d",&loc);
p=root;
while(i<loc-1){
    p=p->add;
    i++;
}
q=p->add;
r=q->add;
q->add=r->add;
r->add=q;
p->add=r;
}
int length(){
struct node *temp;
int count=0;
temp =root;
while(temp!=NULL){
    count++;
    temp=temp->add;

}
return count;
}
void display(){
struct node *temp;
temp=root;
if(temp==NULL)
    printf("List is Empty!\n\n");
else{
    while(temp!=NULL){
        printf("%d--> ",temp->data);
        temp=temp->add;
}
printf("\n");
}
}
void reverse_list(){
struct node *p,*q;
int i=0,j,len,k,temp;
j=length()-1;
p=q=root;
while(i<j){
    k=0;
    while(k<j){
        q=q->add;
        k++;
    }
    temp=p->data;
    p->data=q->data;
    q->data=temp;
i++;j--;
p=p->add;
q=root;
}
}
void addatafter(){
struct node *temp;
int  loc,i=1;
printf("Enter Location after which you want to add :- ");
scanf("%d",&loc);
if(loc>length())
    printf("Invalid Input\n");
else{
    struct node *p;
    p=root;
    while(i<loc){
        p=p->add;
        i++;
}
temp=(struct node *)malloc(sizeof(struct node));
printf("Enter Node value :- ");
scanf("%d",&temp->data);
temp->add=p->add;
p->add=temp;
}
}
void addatbegin(){
struct node *temp;
temp=(struct node *)malloc(sizeof(struct node));
printf("Enter node data :- ");
scanf("%d",&temp->data);
temp->add=NULL;
if(root==NULL){
    root=temp;
}
else{
    temp->add=root;
    root=temp;
}
}
void deletenode(){
int l;
struct node *temp;
printf("Enter a location which node you want to delete :- ");
scanf("%d",&l);
if(l>length())
    printf("Invalid location\n");
else if(l==1){
    temp=root;
    root=temp->add;
    temp->add=NULL;
    free(temp);
}
else{
    struct node *p,*q;
    p=root;
    int i=1;
    while(i<l-1){
        p=p->add;
        i++;
    }
    q=p->add;
    p->add=q->add;
    q->add=NULL;
    free(q);
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
    display();
    break;
case 6:
    swap();
    break;
case 7:
    reverse_list();
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
