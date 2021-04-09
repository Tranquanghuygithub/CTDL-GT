#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
ll n,k;
ll ham(){
	ll A[100001]={0,1,1,1,1,1,1,1,1,1};
	for(ll i=1;i<n;i++)
	for(ll j = k ; j >=0;j--)
	for(ll h=1;h<10;h++){
		if(j-h>= 0){
		A[j]+=A[j-h] ;
		A[j]=A[j]%mod ;
		
		}
	}
	return A[k] ;
}
main(){
	ll t;
	cin>>t;
	while(t-->0){
		cin>>n>>k;
		cout<<ham()<<endl;
	}
}
