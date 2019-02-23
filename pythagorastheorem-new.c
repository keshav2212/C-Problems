/*Assignment 1 : submitted by Keshav(Future CEO of either Google,Microsoft or Apple)
Problem Statement: To find the pythagorean triplet in an input stream of numbers termianted by -1
Remarks : Very good job. I like the creativity used in the program.By looking at the code, I think that you are a born coder
but there is a slight mistake which cannot be ignored. I have mark out the problem in the below code by the comment statements in the code itself.
Please rectify this mistake and send corrected code.*/
#include<stdio.h>
void main(){
int i,j,a,b,c,d,t;
int num[100];
printf("Enter The Numbers\n");
for(i=0;i<=99;i++){
    scanf("%d",&num[i]);
    if(num[i]==-1){
        for(j=i;j<=99;j++)
            num[j]=0;
        break;
}}
t=i-1;
printf("The Numbers Which Keshav Bhaiya you want are :-\n");
for(i=0;i<=t;i++){ //the logic/condition used in 'for' loop is not consistent with the problem
a=((num[i])*(num[i])); //since if the input is 120345-1 then the program does not give any output
b=((num[i+1])*(num[i+1]));
c=((num[i+2])*(num[i+2]));
d=a+b;
if(d==c){
    printf("%d %d %d\n",num[i],num[i+1],num[i+2]);
}}}

