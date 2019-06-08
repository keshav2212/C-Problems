#include<stdio.h>
int main(){
int t;
scanf("%d",&t);
while(t--){
    int n,j,i,count=0,number=0,flag=0;
    scanf("%d",&n);
    char s[n];
    scanf("%s",&s);
    for(j=0;j<n;j++){
        if(s[j]=='P')
            count++;
}
    double attendance=(double)count/n;
    if(attendance>.75)
        printf("0\n");
    else{
        for(j=2;j<(n-2);j++){
            if(s[j]=='A'){
               if((s[j-1]=='P'||s[j-2]=='P')&&(s[j+1]=='P'||s[j+2]=='P')){
                    number++;
                    count++;
                    attendance=(double)count/n;
                    if(attendance>=.75){
                        printf("%d\n",number);
                        flag=1;
                        break;
                }
                }
            }
        }
        if(flag==0)
            printf("-1\n");
    }
}
}
