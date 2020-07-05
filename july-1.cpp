#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long int t;
	cin>>t;
	while(t--){
		long long int n,sum=0;
		cin>>n;
		long long int arr[n];
		for(long long int i=0;i<n;i++){
			cin>>arr[i];
		}
		for(long long int i=0;i<n-1;i++){
			long long int d=arr[i+1]-arr[i];
			sum+=abs(d)-1;
		}
		cout<<sum<<endl;
	}
}
