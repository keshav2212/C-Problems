#include<stdio.h>
int main(){
int i,j;
scanf("%d",&i);
int num[i][4];
for(j=0;j<i;j++)
    scanf("%d%d%d%d",&num[j][0],&num[j][1],&num[j][2],&num[j][3]);
for(j=0;j<i;j++){
    if((num[j][3]-num[j][1])<0)
        printf("%d %d\n",(num[j][2]-num[j][0]-1),(num[j][3]-num[j][1]+60));
    else
        printf("%d %d\n",(num[j][2]-num[j][0]),(num[j][3]-num[j][1]));
}
}
