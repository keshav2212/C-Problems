#include<stdio.h>
#include<math.h>
#define max 100000000
long long int b=1000000007;
//long long int power(int k){
int main(){
int t;
scanf("%d",&t);
while(t--){

    long long int loc[100000],m,k,sum=10,i=1,np,ob=10,d=1,bt,x=2;
    scanf("%lld",&k);k--;
while(k>0){
    if(k&1)
        d=(d*x)%b;
k=k/2;
x=(x*x)%b;
}
    bt=(d*10)%b;
    printf("%lld\n",bt);
}
}
