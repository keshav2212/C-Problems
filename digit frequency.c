#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[100];
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j,k=0;
    scanf("%[^\n]c",s);
    for(j=0;s[j]!='\0';j++){
        if(s[j]==48)
            a++;
        if(s[j]==49)
            b++;
        if(s[j]==50)
            c++;
        if(s[j]==51)
            d++;
        if(s[j]==52)
            e++;
        if(s[j]==53)
            f++;
        if(s[j]==54)
            g++;
        if(s[j]==55)
            h++;
        if(s[j]==56)
            i++;
        if(s[j]==57)
            k++;
    }
    printf("%d %d %d %d %d %d %d %d %d %d",a,b,c,d,e,f,g,h,i,k);
    return 0;
}
