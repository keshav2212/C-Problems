#include<iostream>
#include <tr1/unordered_map>
#include<iterator>
using namespace std;
using namespace std::tr1;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		long long int cord=4*n-1;
		long long int x[cord],y[cord],i,finalx=0,finaly=0,flag=0,flag1=0;
		unordered_map <long long int,long long int>x1,y1;
		for(i=0;i<cord;i++){
			cin>>x[i]>>y[i];
			x1[x[i]]++;
			y1[y[i]]++;
			if(x1[x[i]]%2==1)
				finalx=x[i];
			if(y1[y[i]]%2==1)
				finaly=y[i];
		}
	unordered_map<long long int,long long int>::iterator itr,itr1;
	for(itr=x1.begin();itr!=x1.end();++itr){
		if((itr->second)%2==1){
			finalx=itr->first;
			break;
		}
	}
	for(itr=y1.begin();itr!=y1.end();++itr){
		if((itr->second)%2==1){
			finaly=itr->first;
			break;
		}
	}	
	cout<<finalx<<" "<<finaly<<endl;
}
}
