#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int k,t,m=0;
    double j;
    char str[200],ch,sum[500];
    scanf("%d",&k);
    scanf("%lf",&j);
    fflush(stdin);
    while(ch != '\n')
    {
        ch = getchar();
        str[m] = ch;
        m++;
    }
    printf("%d\n",i+k);
    printf("%.1lf\n",d+j);
    for(i=0;i<=10;i++)
        sum[i]=s[i];
    for(i=0;i<=str[i];i++)
        sum[i+11]=str[i];
    for(i=0;i<=sum[i];i++)
        printf("%c",sum[i]);
    }
