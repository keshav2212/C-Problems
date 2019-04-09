#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct arraystack{
int top;
unsigned capacity;
int * array;
};
struct arraystack* createstack(int cap){
struct arraystack* stack;
stack=malloc(sizeof(struct arraystack));
stack->capacity=cap;
stack->array=malloc(sizeof(int)*stack->capacity);
return(stack);
};
int isfull(struct arraystack *stack){
if(stack->top==stack->capacity-1)
    return(1);
else
    return(0);
}
int isempty(struct arraystack *stack){
if(stack->top==-1)
    return(1);
else
    return(0);
}
void push(struct arraystack *stack,int item){
if(!isfull(stack)){
    stack->top++;
    stack->array[stack->top]=item;
}
}
int pop(struct arraystack *stack){
int item;
if(!isempty(stack)){
    item=stack->array[stack->top];
    stack->top--;
    return(item);
}
else
    return(-1);
}
int main(){
struct arraystack *stack;
int choice,item;
stack=createstack(4);
while(1){
    printf("\n1. Push");
    printf("\n2. Pop");
    printf("\n3. Exit");
    printf("\n.Enter the No. = ");
    scanf("%d",&choice);
    switch(choice){
case 1:{
    printf("\nEnter A Number");
    scanf("%d",&item);
    push(stack,item);
    break;
}
case 2:{
    item=pop(stack);
    if(item==-1)
    printf("Stack is empty");
    else
        printf("value is %d",item);
    break;
}
case 3:
    exit(1);
    }
}
}
