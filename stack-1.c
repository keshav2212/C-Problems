#include<stdio.h>
#define CAPACITY 5
int top=-1;
int stack[CAPACITY];
void push(int element){
if(isFULL())
    printf("Stack is already Full.\n");
else{
    top++;
    stack[top]=element;
    printf("The insertion of %d is successfully.\n",element);
}
}
int isFULL(){
if(top==(CAPACITY-1))
    return 1;
else
    return 0;
}
int pop(){
    int element;
if(isEmpty()){
    printf("Stack is empty.");

}
else{
    element=stack[top];
    top--;
    return element;
}
}
int isEmpty(){
if(top==-1)
    return 1;
else
    return 0;
}
int peek(){
int element;
if(isEmpty())
    printf("Stack is Empty");
else{
element=stack[top];
return element;
}
}
void traversal(){
if(isEmpty())
    printf("Stack is empty");
else{
    int i;
    printf("The Elements are :- ");
    for(i=0;i<=top;i++)
        printf("%d, ",stack[i]);
}
}
int main(){
int i,ch;
while(1){
printf("\n1. Push an Element\n2. Pop an Element\n3. Peek an Element\n4. Traversing the stack\n5. Quit\nEnter you choice :- ");
scanf("%d",&ch);
switch(ch){
case 1:
    printf("Enter Element Value :- ");
    scanf("%d",&i);
    push(i);
    break;
case 2:
    i=pop();
    printf("The element %d is poped from stack. \n",i);
    break;
case 3:
    i=peek();
    printf("The %d is peek value of stack. \n",i);
    break;
case 4:
    traversal();
    break;
case 5:
    exit(1);
default:
    printf("Invalid Input.\n");
}
}
}
