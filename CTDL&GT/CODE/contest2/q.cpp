#include<bits/stdc++.h>
using namespace std;
long long a[100];
void ham(long long n,long long k){
	if(n==1) cout<<"A"<<endl;
	else if(n==2)cout<<"B"<<endl;
	else if(a[n-2]>=k) ham(n-2,k);
	else ham(n-1,k-a[n-2]);
}
main(){
	long long t;
	cin>>t;
	a[0]=0;
	a[1]=1;
	for(int i=2;i<=95;i++){
		a[i]=a[i-1]+a[i-2];
	}
	while(t-->0){
		long long n,k;
		cin>>n>>k;
		ham(n,k);
	}
}
