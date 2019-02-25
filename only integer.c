#include<stdio.h>
int Integer();
int main(){
int x;
x=Integer();
printf("\nYou have entered %d ",x);
}
int Integer(){
int ch,num=0;
do{
ch=getch();
if(ch>=48&&ch<=57){
    printf("%c",ch);
    num=num*10+(ch-48);
}
if(ch==13)
    break;
}while(1);
return(num);
}
