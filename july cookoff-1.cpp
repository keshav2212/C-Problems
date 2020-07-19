#include<iostream>
#include<iterator>
#include<map>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i,flag=0;
		cin>>n;
		string s="";
		cin>>s;
		map <char,int> x;
		for(i=0;i<n;i++){
			x[s[i]]++;
		}
		map<char,int>::iterator itr;
		for(itr=x.begin();itr!=x.end();itr++){
			if((itr->second)%2==1){
				flag=1;
				break;
			}
		}
		if(flag==0)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
}
