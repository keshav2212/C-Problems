#include<stdio.h>
int main(){
int t;
scanf("%d",&t);
while(t--){
long long int n;
scanf("%lld",&n);
long long int a[n],sum=0,g,i;
double mean;
for(i=0;i<n;i++){
scanf("%lld",&a[i]);
sum+=a[i];
}
mean=(double) sum/n;
for(i=0;i<n;i++){
if(a[i]==mean){
    printf("%lld",i+1);
    break;
    }
}
if(i==n)
printf("Impossible");
}
}
