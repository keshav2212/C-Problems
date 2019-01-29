#include<stdio.h>
int main(){
    int l,i,j,t,m,large=0;
    scanf("%d",&l);
    fflush(stdin);
    scanf("%d",&i);
    fflush(stdin);
    int jafar[i][2];
    for(t=0;t<(i-1);t++){
        scanf("%d %d",jafar[t][0],jafar[t][1]);
    }
    fflush(stdin);
    scanf("%d",&j);
    fflush(stdin);
    int yaf[j][2];
    for(t=0;t<(j-1);t++){
        scanf(" %d%d",yaf[t][0],yaf[t][1]);
    }
    fflush(stdin);
    for(t=0;t<=(j-1);t++){
        large=0;
        if(t>0){
                for(m=0;m<=t;m++)
                    large=large+jafar[m][1];
                if(yaf[t][0]<jafar[t][0]){
                    if(yaf[t][1]<large)
                        printf("Go Camp");
                    else
                        printf("Go Sleep");
        }
                else
                    printf("Go Sleep");
        }
        else{
            if(yaf[t][0]<jafar[t][0]){
                if(yaf[t][1]<jafar[t][1])
                    printf("Go Camp");
                else
                    printf("Go Sleep");
        }
            else
                printf("Go Sleep");
}
}
}
