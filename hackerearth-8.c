#include<stdio.h>
int main(){
long int i,j,a=0;
scanf("%ld",&i);
long int num[i][2];
for(j=0;j<i;j++)
    scanf("%ld%ld",&num[j][0],&num[j][1]);
for(j=0;j<i;j++){
    if((2*3.14285714*num[j][0])<(num[j][1]*100))
        a++;
}
printf("%ld",a);
}
