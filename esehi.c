#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int i,j,gcd1,gcd2,r,n,d;
int main() {
    scanf("%d",&i);
    int num[i],k[i],l[i],area[i],j,gcd1[i],gcd2[i],karn[i],sum[i];
    for(j=0;j<=(i-1);j++){
        scanf("%d",&num[j]);
    }
    for(j=0;j<(i-1);j++){
        sum[j]=0;
        for(k[j]=1;k[j]<num[j];k[j]++){
            for(l[j]=1;l[j]<num[j];l[j]++){
                if((k[j]*k[j])+(l[j]*l[j])==(num[j]*num[j]))
                   break;
                else
                   continue;
                   }
        }
        area[j]=0.5*k[j]*l[j];
        if(k[j]>l[j]){
            n=k[j];
            d=l[j];
        }
        else{
            n=l[j];
            d=k[j];
        }
        r=n%d;
        while(r != 0){
            n=d;
            d=r;
            r=n%d;
        }
    gcd1[j]=d;
    if(num[j]>l[j]){
            n=num[j];
            d=l[j];
        }
        else{
            n=l[j];
            d=num[j];
        }
        r=n%d;
        while(r != 0){
            n=d;
            d=r;
            r=n%d;
        }
    gcd2[j]=d;
    }
    r=karn[j]*karn[j];
    for(karn[j]=0;karn[j]<=(num[j]/2);karn[j]++){
        if(r==num[j])
            break;
    }
    if((karn[j]>0) && (karn[j]<(num[j]/2))){
        if(gcd1[j]==1&&gcd2[j]==1){
            if((area[j]%6)==0&&(area[j]%28)==0);
            else
                sum[j]=sum[j]+1;
        }
    printf("%d\n",sum[j]);
    }
    }
