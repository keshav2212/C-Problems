#include<stdio.h>
#define max 10
int cqueue[max];
int front=-1,rear=-1;
void insert(int element){
if(rear==-1&&front==-1){
    rear=0;front=0;
    cqueue[rear]=element;
}
else if((front==rear+1)||(rear+1==max))
printf("Queue is Full.\n");
else if(rear==max-1){
    rear=0;
    cqueue[rear]=element;
}
else
cqueue[++rear]=element;
}
void delete1(){
if(rear==-1&&front==-1)
printf("Queue is Empty\n");
else if(front==rear){
    printf("Deleted item is %d\n",cqueue[front]);
front=-1;
rear=-1;
}
else if(front==max-1){
        printf("Deleted item is %d\n",cqueue[front]);
        front=0;
}
else{
printf("Deleted Item is %d\n",cqueue[front]);
front++;
}
}
int main(){
while(1){
    int i,t;
    scanf("%d",&i);
    if(i==1){
        printf("Enter value");
        scanf("%d",&t);
        insert(t);
    }
    else
        delete1();
}
}
