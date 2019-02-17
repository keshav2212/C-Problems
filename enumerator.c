#include<stdio.h>
enum boolean{
false,true
};
enum boolean isEven(int  x){
if(x%2==0)
    return(true);
else
    return(false);
}
main(){
int n;
enum boolean result;
printf("Enter A Number = ");
scanf("%d",&n);
result=isEven(n);
if(result==true)
    printf("Even Number");
else
    printf("Odd Number");
}
