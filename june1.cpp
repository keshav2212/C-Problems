#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int arr[n];
		int sum=0,sum1=0,i;
		for(i=0;i<n;i++){
		cin>>arr[i];
		sum=sum+arr[i];
		if(arr[i]>k)
		sum1=sum1+k;
		else
		sum1=sum1+arr[i];
	}
	cout<<sum-sum1<<endl;
	}
}
