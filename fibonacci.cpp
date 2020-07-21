#include<iostream>
#include<vector>
#include<cmath>
typedef long long int ll;
using namespace std;
int main(){
	ll i,n,x;
	int m;
	cin>>n>>m;
	long int se=pow(m,2);
	x=n%(se-1);
	int arr[x+1];
	arr[0]=0;
	arr[1]=1;
	cout<<x;
	for(i=2;i<x+1;i++)
		arr[i]=(arr[i-2]%m+arr[i-1]%m)%m;
	cout<<arr[x]<<endl;
}
