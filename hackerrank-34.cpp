#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main(){
	int n,q,last=0,seq,ind;
	cin>>n>>q;
	int arr[q][3];
	vector< vector<int> > v2;
	for(int i=0;i<n;i++){
		vector <int> v1;
		v2.push_back(v1);
	}
	for(int i=0;i<q;i++){
		cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
		vector<int>::iterator itr;
		ind=((arr[i][1]^last)%n);
		vector <int> v1;
		if(arr[i][0]==1){
			cout<<"a1";
			v1=v2.at(ind);
			//v2.erase(v2.begin()+ind);
			v1.push_back(arr[i][2]);
			v2[ind]=v1;
		}
		
		else{
			v1=v2[ind];
			last=v1[arr[i][2]%v1.size()];
			cout<<last<<endl;
	}
	}
}
