/*Problem :- Here we are doing to convert upper case alphabets to lower case alphabets that's all.*/

#include<stdio.h>
main(){
char str[20];
int i;
printf("Enter a string = ");
gets(str);
for(i=0;str[i];i++){
    if(str[i]>='A' && str[i]<='Z')
        str[i]=str[i]+32;
}
printf("%s",str);
}
