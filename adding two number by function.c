main(){
    int x,y;\\two variables for two numbers
    printf("Enter Two Numbers");
    scanf("%d%d",&x,&y);\\for scaning two numbers
    add(x,y);\\function call
}
void add(int a,int b){
int c;
c=a+b;
printf("Sum is %d ",c);
}
