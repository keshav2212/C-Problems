#include<iostream>
#include<algorithm>
typedef long long int ll;
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll res,i,n,k,flag=0;
		cin>>n>>k;
		ll p[n];
		for(i=0;i<n;i++)
		cin>>p[i];
		sort(p,p+n);
		for(i=0;p[i]<k;i++){
			if(k%p[i]==0){
				res=p[i];
				flag=1;
				}
		}
		if(flag==0)
		cout<<"-1"<<endl;
		else
		cout<<res<<endl;

	}
}
