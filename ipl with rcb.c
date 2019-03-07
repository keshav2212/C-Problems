#include<stdio.h>
int main(){
int i;
scanf("%d",&i);
while(i>0){
    int x,y,t;
    scanf("%d%d",&x,&y);
    if(x<=y)
        printf("0\n");
    else if((x<(2*y))&&(x>y)){
        t=x-y;
        printf("%d\n",t);
    }
    else
        printf("%d\n",(x/2));
    i--;
}
}
