/* in this problem, we are just swiping two number without the help of third variable.*/
#include<stdio.h>
int main(){
int a,b;
printf("Enter Two Values");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("the two swiped numbers are :- %d and %d",a,b);

       }
