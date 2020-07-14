#include<iostream>
#include<map>
#include<iterator>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int smallest(int x,int y,int z){
	return min(min(x,y),z);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll minz=10000000000000,a[n],b[n],sd[n],re=0,sum=0,flag=0,i,sd1[n],re1=0;
		map <ll,ll>x,y;
		for(ll i=0;i<n;i++){
			cin>>a[i];
			x[a[i]]++;
			if(minz>a[i])
			minz=a[i];
		}
		for(ll i=0;i<n;i++){
			cin>>b[i];
			y[b[i]]++;
			if(minz>b[i])
			minz=b[i];
		}
		map <ll,ll>::iterator itr;
		for(itr=x.begin();itr!=x.end();itr++){
			if((itr->second+y[itr->first])%2==1){
					flag=1;
					break;
				}
			if(itr->second>y[itr->first]){
				ll op=abs(itr->second-y[itr->first])/2;
				while(op--){
					sd[re++]=itr->first;
				}
			}
			}
		if(flag==1){
			cout<<-1<<endl;
			continue;
		}
		for(itr=y.begin();itr!=y.end();itr++){
			if((itr->second+x[itr->first])%2==1){
					flag=1;
					break;
				}
			if(itr->second>x[itr->first]){
				ll op=abs(itr->second-x[itr->first])/2;
					while(op--){
					sd[re++]=itr->first;
				}
				}	
			}
		if(flag==1){
			cout<<-1<<endl;
			continue;
		}
		sort(sd,sd+re);
		//sort(sd1,sd1+re,greater<ll>());	
		for(i=0;i<re/2;i++)
			sum+=min(sd[i],minz*2);
		cout<<sum<<endl;
	}
}
