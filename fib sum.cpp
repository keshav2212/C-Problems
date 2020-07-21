#include<iostream>
typedef long long int ll;
using namespace std;
int main(){
	ll i,n,x,sum=0;
	cin>>n;
	ll arr[60];
	arr[0]=0;
	arr[1]=1;
	for(i=2;i<60;i++){
		arr[i]=arr[i-1]%10+arr[i-2]%10;
	}
	n=n%60;
	for(i=0;i<=n;i++)
	sum+=arr[i];
	cout<<sum%10<<endl;
	}
