
#include <stdio.h>
#include <string.h>

int main(){
    int i,j,num[6][6],large=-7854,sum;
    for(i=0;i<=5;i++){
      scanf("%d%d%d%d%d%d",&num[i][0],&num[i][1],&num[i][2], &num[i][3],&num[i][4],&num[i][5]);
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            sum=num[i][j]+num[i][j+1]+num[i][j+2]+num[i+1][j+1]+num[i+2][j]+num[i+2][j+1]+num[i+2][j+2];
            if(sum>large)
                large=sum;
        }
    }
    printf("%d",large);
}
