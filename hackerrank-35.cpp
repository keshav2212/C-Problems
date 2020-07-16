#include<iostream>
#include<map>
using namespace std;
int main(){
	int n,q;
	cin>>n;
	map<string,int>n1,q1;
	string s="";
	for(int i=0;i<n;i++){
	cin>>s;
	n1[s]++;
}
	cin>>q;
	for(int i=0;i<q;i++){
		cin>>s;
		try{
			cout<<n1[s]<<endl;
		}
		catch(...){
			cout<<0<<endl;
		}
	}
	}

