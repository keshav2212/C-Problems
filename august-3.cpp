#include<iostream>
using namespace std;
typedef long long int ll;

int main(){
int t;
cin>>t;
while(t--){
	int numc,numr,pc,pr;
	cin>>pc>>pr;
	numc=pc/9;
	numr=pr/9;
	if(pc%9!=0)
	numc+=1;
	if(pr%9!=0)
	numr+=1;
	if(numc<numr)
	cout<<0<<" "<<numc<<endl;	
	else
	cout<<1<<" "<<numr<<endl;
}	
}
