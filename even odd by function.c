main(){
add();
isEven();
}
add(){
int a,b,c;
printf("Enter two numbers = ");
scanf("%d%d",&a,&b);
c=a+b;
printf("Sum is %d \n",c);
}
isEven(){
int a;
printf("Enter A Number = ");
scanf("%d",&a);
if(a%2==0)
   printf("even");
else
   printf("Odd");
}
