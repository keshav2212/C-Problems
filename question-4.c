#include<stdio.h>
int main(){
int L,i,j;
scanf("%d%d",&L,&i);
int dim[i][2];
for(j=0;j<i;j++)
    scanf("%d%d",&dim[j][0],&dim[j][1]);
for(j=0;j<i;j++){
    if(dim[j][0]<L)
        printf("UPLOAD ANOTHER\n");
    else{
        if(dim[j][1]<L)
            printf("UPLOAD ANOTHER\n");
        else if(dim[j][0]==L&&dim[j][1]==L||dim[j][0]==dim[j][1])
            printf("ACCEPTED\n");
        else
            printf("CROP IT\n");
    }
}
}
