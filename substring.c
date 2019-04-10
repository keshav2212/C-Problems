#include<stdio.h>
#include<string.h>
int main()
{
    int o,t;
scanf("%d",&o);
for(t=0;t<o;t++){
    int t=0,i,j,g,len,k,p;
    scanf("%d",&p);
    fflush(stdin);
    char str[p],x;
        scanf("%s %c",&str,&x);
    for (len = 1; len<= p; len++)
    {
        for (i = 0; i <= p - len; i++)
        {

            for (k = i; k <len+i; k++){
                if(str[k]==x){
                    t++;
                    break;
        }
        }
        }
        }
    printf("%d\n",t);
}
    return 0;
    }
