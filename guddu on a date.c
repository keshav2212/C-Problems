#include<stdio.h>
int main(){
long long int t;
scanf("%lld",&t);
while(t--){
long long int r,sum=0,i,j;
char n[1000000];
scanf("%s",&n);
int length=strlen(n);
for(i=0;i<length;i++)
    sum=sum+n[i]-48;
for(i=0;i<10;i++){
    if((sum+i)%10==0)
        break;
}
char s[1000000];
printf("%s",n);
printf("%d\n",i);
}
}
