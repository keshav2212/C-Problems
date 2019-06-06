#include<string.h>
#include<stdio.h>
int main(){
 int t;
 scanf("%d",&t);
 while(t--){
    char s[10000];int i;
  scanf("%s",&s);
  int n=strlen(s);
  if(n==1){
        printf("%s\n",s);
        }
  else if(n==2){
    if(s[0]>49){
        if(s[1]!=57){
         s[0]--;s[1]=57;
        printf("%s\n",s);
        }
        else
            printf("%s\n",s);
    }
  else{
    if(s[1]==48)
        printf("9\n");
    else
        printf("%s\n",s);
  }
    }
else{
    if(s[0]>49){
        int flag=1;
        for(i=1;i<n;i++)
            if(s[i]!=57)
                flag=0;
        if(flag==0){
            s[0]--;
            for(i=1;i<n;i++)
                s[i]=57;
        }
        printf("%s\n",s);
    }
    else{
    int k=1;
    while(k<n){
        if(s[k]>48)
            break;
            k++;
    }
    if(k==n){
        for(i=1;i<n;i++)
            s[i]=57;
        printf("%s\n",s+1);
    }
    else if(k==n-1){
        printf("%s\n",s);
    }
    else{
        int flag=1;
        for(i=k+1;i<n&&flag;i++){
            if(s[i]!=57)
                flag=0;
        }
        if(flag==1)
            printf("%s\n",s);
        else{
            s[k]--;
            for(i=k+1;i<n;i++)
                s[i]=57;
            printf("%s\n",s);
        }
    }
    }
}
    }
}
