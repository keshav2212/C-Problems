#include "stdio.h"
void bubble_sort(int *,int);
main(){
int i,j;
printf("Enter Number of values");
scanf("%d",&i);
int num[i];
printf("Enter the values");
for(j=0;j<i;j++)
    scanf("%d",&num[j]);
bubble_sort(num,i);
for(j=0;j<i;j++)
    printf("%d ",num[j]);
}
void bubble_sort(int A[], int N){
    int round,i,temp;
    for(round=1;round<=N-1;round++){
        for(i=0;i<=N-1-round;i++){
            if(A[i]>A[i+1]){
            temp=A[i];
            A[i]=A[i+1];
            A[i+1]=temp;
            }
    }
}
}
