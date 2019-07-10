#include<stdio.h>
int main(){
long long int t;
scanf("%lld",&t);
while(t--){
long long int j,n,k;
scanf("%lld %lld",&n,&k);
if(k>n)
k=k%n;
if(k==0){
    printf("0\n");
    continue;}
if(n%2==0){
   if(n/2==k)
   printf("%lld\n",n-1);
    else if(n/2>k)
        printf("%lld\n",(k*2));
    else
        printf("%lld\n",((n-k)*2));
}
else{
if((n/2==k)||(n/2==(k-1)))
    printf("%lld\n",n-1);
else if(n/2>k)
    printf("%lld\n",k*2);
else
    printf("%lld\n",(n-k)*2);
}
}
}
