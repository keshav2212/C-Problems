#include<stdio.h>
int main(){
    int i,j,x,sum;
    char str[5];
    scanf("%s",&str);
    fflush(stdin);
    scanf("%d",&x);
    sum=str[0]+str[1]+str[3]+str[4]-192;
        for(j=1;j<=x;j++){
            sum=sum+j;
            if(sum%x==0){
                printf("%d",j);
                break;
    }
        }
    if(j>x)
        printf("-1");
    }
