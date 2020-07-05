#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int sum=0,n,apoint=0,bpoint=0,i;
		cin>>n;
		long long int a[n],b[n];
		for(i=0;i<n;i++){
			cin>>a[i];
			cin>>b[i];
			
		}
		for(i=0;i<n;i++){
			long long int suma=0,sumb=0;
			while(a[i]!=0||b[i]!=0){
			suma=suma+(a[i]%10);
			a[i]=a[i]/10;
			sumb=sumb+(b[i]%10);
			b[i]=b[i]/10;
			}
			if(suma>sumb)
			apoint+=1;
			else if(suma==sumb){
				apoint+=1;
				bpoint+=1;
			}
			else
			bpoint+=1;
		}
		if(apoint>bpoint)
		cout<<0<<" "<<apoint<<endl;
		else if(apoint==bpoint)
		cout<<2<<" "<<apoint<<endl;
		else
		cout<<1<<" "<<bpoint<<endl;
	}
}
