#include<iostream>
#include<cmath>
typedef long long int ll;
using namespace std;
int main(){
	int i,m,sum1=1,sum2=0,x,sum=0;
	ll n;
	cin>>n;
	int arr[60];
	arr[0]=0;
	arr[1]=1;
	for(i=2;i<60;i++){
		arr[i]=(arr[i-1]%10+arr[i-2]%10)%10;
	}
	n=n%60;
	for(i=0;i<=n;i++){
	int r=pow(arr[i],2);
	sum+=(r%10);
}
	cout<<sum%10<<endl;
	}
