#include<stdlib.h>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,x,daycounter=0,i;
		cin>>n>>x;
		ll arr[n];
		ll arrcounter=0;
		for(i=0;i<n;i++){
			cin>>arr[i];
			//cout<<arr[i]<<" ";
		}
		sort(arr,arr+n);
		for(i=0;i<n;i++){
		if(arr[i]==0)
		continue;
		if(x>=arr[i]){
			if(arr[i]*2>x){
			if((arr[i+1]<x)&&(arr[i+1]>(2*arr[i]))){
			continue;}
			daycounter++;
			x=(arr[i]*2);
			arr[i]=0;
		}
	}
		else{
			while(x<ceil(arr[i]/2.0)){
				daycounter++;
				x=x*2;	
			}
			if(arr[i]*2>x){
			x=arr[i]*2;
			arr[i]=0;
			daycounter=daycounter+2;	
			}
			else{
			arr[i]=(arr[i]-x)*2;
			x=x*2;
			daycounter=daycounter+1;
			}
			}
			}
sort(arr,arr+n);
for(i=0;i<n;i++){
	if(arr[i]==0)
	continue;
	else
	daycounter++;
}
cout<<daycounter<<endl;
}
}

