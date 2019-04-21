#include<stdio.h>
#include<string.h>
int main(){
int t;
scanf("%d",&t);
while(t--){
int n,j,length,value,popat;
scanf("%d",&n);
float time[n],sum=0;
char s[n][20];
for(j=0;j<n;j++){
    fflush(stdin);
    scanf("%[^\n]c",&s[j]);
    time[j]=0.2;
}
for(popat=0;popat<n;popat++){
length=strlen(s[popat]);
for(j=1;j<length;j++){
    if((s[popat][j]==s[popat][j-1])||(s[popat][j-1]==s[popat][j]+2)||(s[popat][j-1]==s[popat][j]-2)||(s[popat][j-1]==s[popat][j]+1)||(s[popat][j-1]==s[popat][j]-1))
        time[popat]=time[popat]+0.4;
    else
        time[popat]=time[popat]+0.2;
}
}
for(j=1;j<n;j++){
        for(popat=j-1;popat>=0;popat--){
            value=strcmp(s[popat],s[j]);
                if(value==0){
                    time[j]=(time[popat]/2);
                    break;
    }
    }
}

for(j=0;j<n;j++){
    sum=sum+time[j];
}
int r;
r=sum*10;
printf("%d",r);
}
}
