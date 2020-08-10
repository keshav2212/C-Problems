#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int h,p,flag=0;
		cin>>h>>p;
		while(p>0){
			h=h-p;
			if(h<1){
				flag=1;
				break;
			}
			else
			p=p/2;	
		}
		if(flag==1)
		cout<<1<<endl;
		else
		cout<<0<<endl;
		}
	}
