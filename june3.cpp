#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],flag=0,paake=0,daske=0,panke=0;
		string res="NO";
		
		for(int i=0;i<n;i++){
			cin>>a[i];
			}
			for(int i=0;i<n;i++)
			{
			if(i==0){
			if(a[0]==10||a[0]==15){
				flag=1;
				break;			
			}
			else
			paake++;
		}
			else
			{
			if(a[i]==5)
				paake++;
			if(a[i]==10){
				if(paake>0){
					paake--;
					daske++;
				}
				else
					flag=1;
			}
			if(a[i]==15){
				if(daske>0){
				daske--;
				}
				else if(paake>1){
				paake=paake-2;
				}
				else
				flag=1;
			}
		}
	}
		if(flag==0)
		res="YES";
		cout<<res<<endl;
		}
	}
