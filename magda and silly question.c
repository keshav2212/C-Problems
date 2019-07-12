#include<stdio.h>
int main(){
int t;
scanf("%d",&t);
while(t--){
int n;
scanf("%d",&n);
int a[n],b[n],sum=0,sum1=0,i;
for(i=0;i<n;i++){
scanf("%d",&a[i]);
sum=sum+a[i];
}
for(i=0;i<n;i++){
scanf("%d",&b[i]);
sum1=sum1+b[i];
}
if(sum%2==0)
printf("%d\n",((sum+sum1)/2));
else{
    if(sum1%2==0)
        printf("%d\n",((sum+sum1)/2));
    else
        printf("%d\n",(((sum+sum1)/2)-1));

}
}
}
