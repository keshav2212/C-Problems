#include<stdio.h>
int main(){
int t;
scanf("%d",&t);
while(t--){
    int n,i,count=0,flag=1;
    scanf("%d",&n);
    char s[n],s1[n];
    scanf("%s",&s);
    scanf("%s",&s1);
    for(i=0;i<n-1;i++){
        if(flag==0){
            if((s[i]==s1[i])||(s1[i]=='N')){
                flag=1;
                continue;}
            else
                continue;
        }
        else if(s[i]==s1[i]){
            count++;
            continue;}
        else if(s1[i]=='N'){
         continue;
        }
        else
            flag=0;
    }
    if(i==(n-1)&&flag==0)
        s1[i]='N';
    if(s[n-1]==s1[n-1])
        count++;
printf("%d\n",count);
}

}
