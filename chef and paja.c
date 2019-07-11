#include<stdio.h>
int main(){
long long int t;
scanf("%lld",&t);
while(t--){
long long int x,y,n,k,i;
scanf("%lld %lld %lld",&x,&y,&k);
n=x+y;
if(n<(2*k)){
n=n-k;
if(n==0)
    printf("Chef\n");
else
    printf("Paja\n");
}
else{
if(n%(2*k)==0)
    printf("Chef\n");
else{
    if((n%(2*k))<k)
        printf("Chef\n");
    else
        printf("Paja\n");
}
}
}
}
