#include<stdio.h>
#include<string.h>
int main(){
int i,j,flag=0,count=0,k;
char s[100000],str[100000];
scanf("%[^\n]",&s);
for(j=0;s[j]!='\0';j++){
        i=strlen(str);
        for(k=0;k<i;k++){
        if(str[k]==s[j]){
            flag=1;
            break;
            }
        }
        if(flag==0){
        str[i]=s[j];
        count++;
        }
        flag=0;
}
printf("%d",count);
}
