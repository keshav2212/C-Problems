
#include <stdio.h>

int main(){
    int j,fit=1,tif=0;
	char num[20];
	for(j=0;j<9;j++)
	    scanf("%c",&num[j]);
	int a=num[0]-48;
	int b=num[1]-48;
	int c=num[3]-48;
	int d=num[4]-48;
	int e=num[5]-48;
	int f=num[7]-48;
	int g=num[8]-48;
	    if(num[2]=='A'||num[2]=='E'||num[2]=='I'||num[2]=='O'||num[2]=='U'||num[2]=='Y')
	        fit=0;
	   if(((f+g)%2)==0&&((d+e)%2)==0&&((a+b)%2)==0&&((c+d)%2)==0)
	        tif=1;
	   if(fit==1)
	        if(tif==1)
	            printf("valid");
	        else
	            printf("invalid");
       else
            printf("invalid");
}
