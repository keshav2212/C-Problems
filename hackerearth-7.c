#include<stdio.h>
int main(){
int i,j,k;
scanf("%d%d",&i,&j);
int num[i];
for(k=0;k<i;k++)
    scanf("%d",&num[k]);
for(k=0;k<i;k++){
    if(num[k]>=j)
        printf("YES");
    else
        printf("NO");
}
}
