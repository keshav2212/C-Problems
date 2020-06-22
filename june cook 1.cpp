#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int count=1,n,b,m;
		cin>>n>>b>>m;
		int arr[m];
		for(int i=0;i<m;i++){
			cin>>arr[i];
		}
		int blocks=ceil(n/b);
		int previous_block=arr[0]/b;
		for(int i=1;i<m;i++){
			int curr_block=arr[i]/b;
			if(curr_block!=previous_block){
				count++;
				previous_block=curr_block;
			}
		}
		cout<<count<<endl;
	}
}
