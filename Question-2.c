#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    scanf("%d",&i);
    int num[i],rev[i];
    for(j=0;j<=(i-1);j++){
        scanf("%d",&num[j]);
    }
    for(j=0;j<=(i-1);j++){
        rev[j]=num[(i-j-1)];
        printf("%d ",rev[j]);
    }
}
