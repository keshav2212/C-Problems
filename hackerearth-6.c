#include<stdio.h>
int main(){
int i,j,sum=0,motu,patlu;
scanf("%d",&i);
for(j=1;1;j++){
    patlu=j;
    sum=sum+patlu;
    if(sum>=i){
        printf("Patlu");
        break;
        }
    motu=j*2;
    sum=sum+motu;
    if(sum>=i){
        printf("Motu");
        break;
}
}
}
