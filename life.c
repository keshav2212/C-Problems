#include<stdio.h>
int main(){
int i,j,k,l,num[10000];
for(j=0;j<10000;j++){
    scanf("%d",&num[j]);
    if(num[j]==-1)
        break;
}
for(j=0;num[j]!=42;j++)
    printf("%d\n",num[j]);
}
