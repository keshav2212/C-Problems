main(){
int i,j,a,b,c,d;
int num[100];
printf("Enter The Numbers");
for(i=0;i<=99;i++){
    scanf("%d",&num[i]);
    if(num[i]==-1){
        for(j=i;j<=99;j++)
            num[j]=0;
        break;
}}
printf("The Numbers Which Keshav Bhaiya you want are :-\n");
for(i=0;num[i];i++){
a=((num[i])*(num[i]));
b=((num[i+1])*(num[i+1]));
c=((num[i+2])*(num[i+2]));
d=a+b;
if(d==c){
    printf("%d %d %d\n",num[i],num[i+1],num[i+2]);
}}}

