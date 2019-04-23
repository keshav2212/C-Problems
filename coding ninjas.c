#include<stdio.h>
int main(){
int a[3],round,i,temp;
char x[3];
scanf("%d%d%d",&a[0],&a[1],&a[2]);
for(round=1;round<=2;round++){
    for(i=0;i<=2-round;i++){
            if(a[i]>a[i+1]){
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
            }
    }
}
fflush(stdin);
scanf("%[^\n]c",&x);
if(x[0]=='A')
    printf("%d ",a[0]);
else if(x[0]=='B')
    printf("%d ",a[1]);
else if(x[0]=='C')
    printf("%d ",a[2]);
if(x[1]=='A')
    printf("%d ",a[0]);
else if(x[1]=='B')
    printf("%d ",a[1]);
else if(x[1]=='C')
    printf("%d ",a[2]);
if(x[2]=='A')
    printf("%d ",a[0]);
else if(x[2]=='B')
    printf("%d ",a[1]);
else if(x[2]=='C')
    printf("%d ",a[2]);
}
