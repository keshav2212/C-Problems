#include<iostream>
#include<iterator>
#include<algorithm>
#include<map>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s,p,final="",start="",end="";
		char character;
		int number,flag3=0;
		cin>>s;
		cin>>p;
		map<char,int>x;
		map<char,int>::iterator itr;
		for(int i=0;i<s.length();i++)
			x[s[i]]++;
		for(int i=0;i<p.length();i++)
			x[p[i]]--;
		for(itr=x.begin();itr!=x.end();itr++){
			if(itr->first<p[0]){
			while(itr->second--)
			start+=itr->first;
			}
			else if(itr->first==p[0]){
				character=itr->first;
				number=itr->second;
			}
			else if(itr->first>p[0]){
			while(itr->second--)
			end+=itr->first;	
			}
		}
		int plength=p.length(),i=0;
		while(i<plength){
			if(p[i]<character){
				final=start+p;
				while(number--)
					final=final+character;
				final=final+end;
				flag3=1;
			break;}
			else if(p[i]>character){
				final=start;
				while(number--)
					final=final+character;
				final=final+p+end;
				flag3=1;
			break;
			}
			i++;			
		}
		i=0;
		if(flag3==0){
		final=s;
		}
		cout<<final<<endl;
	}
}
