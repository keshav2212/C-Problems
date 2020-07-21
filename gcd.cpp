#include<iostream>
using namespace std;
long long int gcd1(int a,int b){
	long long gcd =0;
	if(b==0)
	return a;
	else if(a>b)
		gcd=gcd1(b,a%b);
	else if(a==b)
		gcd=a;
	else
		gcd=gcd1(a,b%a);
	return gcd;
}
int main(){
	long long int gcd,a,b;
	cin>>a>>b;
	gcd=gcd1(a,b);
	cout<<gcd<<endl;
	}
