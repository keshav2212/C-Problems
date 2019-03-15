/* here we have hve made a simple calculator by which we can do simple things like addition,
 subtraction, product, last digit, odd even,n number printing, that' the whole things of this program.*/

#include <stdio.h>
#include <conio.h>
main(){
int choice,a,b,r;
while(1){
printf("\n\n1. Addition \n");
printf("2. Subtraction \n");
printf("3. Product \n");
printf("4. last Digit \n");
printf("5. Odd Even \n");
printf("6. N numbers printing \n");
printf("7. Exit \n");
printf("Enter Your Choice = ");
scanf("%d",&choice);
switch(choice){
case 1:
   printf("Enter two Numbers = ");
   scanf("%d%d",&a,&b);
   r=a+b;
   printf("The addition of %d and %d is %d",a,b,r);
   break;
case 2:
   printf("Enter two Numbers = ");
   scanf("%d%d",&a,&b);
   r=a-b;
   printf("The subtraction of %d from %d is %d",b,a,r);
   break;
case 3:
   printf("Enter two Numbers = ");
   scanf("%d%d",&a,&b);
   r=a*b;
   printf("The product of %d and %d is %d",a,b,r);
   break;
case 4:
   printf("Enter a Numbers = ");
   scanf("%d",&a);
   r=a%10;
   printf("The last digit of %d is %d",a,r);
   break;
case 5:
   printf("Enter a Numbers = ");
   scanf("%d",&a);
   if(a%2==0)
      printf("%d is an even integer",a);
   else
      printf("%d is an odd integer",a);
    break;
case 6:
   printf("Enter a Numbers = ");
   scanf("%d",&a);
   for(b=1;b<=a;b++)
      printf("%d \n",b);
   break;
case 7:
   exit(0);
default:
   printf("Invalid Choice");
}}}
