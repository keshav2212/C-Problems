#include<stdio.h>
main(){
char r[20];
int i;
printf("Enter A Word = ");
gets(r);
for(i=0;r[i]!='\0';i++);
printf("The Lenth of word is %d",i);
}
