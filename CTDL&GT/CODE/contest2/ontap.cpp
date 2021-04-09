#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,k,A[100];
void ham(ll n,ll k){
	if(n==1) cout<<"A"<<endl;
	if(n==2) cout<<"B"<<endl;
	else{
		if(k<=A[n-2]) ham(n-2,k);
		else if(k>A[n-2]) ham(n-1,k-A[n-2]);
	}
}
main(){
	ll t;
	cin>>t;
	A[0]=0;
	A[1]=1;
	for(int i=2;i<=95;i++){
		A[i]=A[i-2]+A[i-1];
	}
	while(t-->0){
		cin>>n>>k;
		ham(n,k);
		
	}
}
