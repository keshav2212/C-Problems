#include<iostream>
typedef long long int ll;
using namespace std;
int main(){
	ll i,n,m,sum1=1,sum2=0,x,sum=0;
	cin>>m>>n;
	ll arr[60];
	arr[0]=0;
	arr[1]=1;
	for(i=2;i<60;i++){
		arr[i]=arr[i-1]%10+arr[i-2]%10;
		sum1+=arr[i]%10;
	}
	n=n%60;
	m=m%60;
	if(m>n){
		for(i=n+1;i<m;i++)
		sum2+=arr[i];
	cout<<(sum1-sum2)%10<<endl;
	}
	else{
	for(i=m;i<=n;i++)
	sum+=arr[i];
	cout<<sum%10<<endl;
	}
	}
