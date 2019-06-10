#include<stdio.h>
#include<string.h>
int main(){
int t;
scanf("%d",&t);
while(t--){
    int i,j,k,n,length,count=0;
    scanf("%d",&n);
    char s[n];
    scanf("%s",&s);
    for(j=0;j<(n-1);j++){
        if(s[j]!='a'&&s[j]!='e'&&s[j]!='i'&&s[j]!='o'&&s[j]!='u'){
            if(s[j+1]=='a'||s[j+1]=='e'||s[j+1]=='i'||s[j+1]=='o'||s[j+1]=='u')
                count++;
        }
    }
printf("%d\n",count);
}
}
