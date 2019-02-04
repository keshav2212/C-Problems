#include<stdio.h>
int min(int *, int,int);
int min(int A[],int k,int N){
    int loc,min,j;
    min=A[k];
    loc=k;
    for(j=k;j<=N-1;j++){
        if(min>A[j]){
            min=A[j];
            loc=j;
        }
    }
    return (loc);
}
int main(){
int i,j;
printf("Enter Number of values");
scanf("%d",&i);
int num[i],loc,k,temp;
printf("Enter the values");
for(j=0;j<i;j++)
    scanf("%d",&num[j]);
for(k=0;k<=(i-2);k++){
    loc=min(num,k,i);
    temp=num[k];
    num[k]=num[loc];
    num[loc]=temp;
}
for(j=0;j<i;j++)
    printf("%d ",num[j]);
}
