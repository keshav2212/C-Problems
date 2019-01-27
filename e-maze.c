#include<stdio.h>
int main(){
    int a=0,b=0,i;
    char t[200];
    scanf("%s",&t);
    for(i=0;t[i]!='\0';i++){
        switch(t[i]){
            case 'L':
                --a;
                break;
            case 'R':
                ++a;
                break;
            case 'U':
                ++b;
                break;
            case 'D':
                --b;
                break;
            default:
                printf("0 0");
        }
    }
    printf("%d %d",a,b);
}
