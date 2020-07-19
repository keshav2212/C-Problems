#include<iostream>
#include<map>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long int arr[n];
		map<long long int,long long int> x;
		long long int flag=0,i,j;
		for(i=0;i<n;i++)
			cin>>arr[i];
		for(i=0;i<n;i++){
			long long int ok=arr[i];
			for(j=i;j<n;j++){
				ok=ok|arr[j];
		}
		x[ok]++;
		if(x[ok]>1){
			flag++;
			break;
		}
		}
		if(flag==0)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
}
