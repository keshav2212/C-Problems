
#include <stdio.h>

int main(){
	int num,j;
	long int sum=1;
	scanf("%d", &num);
	int array[num];
    for(j=0;j<num;j++)
        scanf("%d",&array[j]);
    for(j=0;j<num;j++)
        sum=sum*array[j];
    printf("%ld",sum);
}

