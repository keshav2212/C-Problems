#include<iostream>
#include<math.h>
using namespace std;
int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int xs,two=1,ts,count=0,js,i;
		long long int x,y;
		cin>>ts;
		xs=ts;
		if(ts%2==1){
			count=ts/2;
		}
		else{
		while(ts%2==0){
			two++;
			ts=ts/2;
		}	
		}
		two=pow(2,two);
		count=xs/two;
		cout<<count<<endl;
	}
	}
