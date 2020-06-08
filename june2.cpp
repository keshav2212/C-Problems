#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s="";
		cin>>s;
		int flag=0,count=0,i;
		for(i=0;i<s.length()-1;i++){
			if(flag==0){
			if(s[i]=='x'){
				if(s[i+1]=='y'){
					count++;
					flag=1;
				}
			}
			else{
				if(s[i+1]=='x'){
					count++;
					flag=1;
				}
			}
		}
	else{
		flag=0;
		continue;
	}
	}
		cout<<count<<endl;
	}
}
