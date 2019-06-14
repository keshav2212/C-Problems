#include<stdio.h>
#define max 100000
static long long int i;
int main(){
long long int t;
long long int sum[max];
sum[0]=0;
scanf("%lld",&t);
while(t--){
long long int j,k,q,n;
scanf("%lld %lld",&n,&k);
if((i+1)>=k){
    printf("%lld\n",sum[k-1]);
}
else{
for(j=(i+1);j<k;j++){
    sum[j]=sum[j-1]+j;
}
i=k-1;
printf("%lld\n",sum[k-1]);
}
}
}
