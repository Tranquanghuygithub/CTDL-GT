#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,k;
ll poww(ll n,ll k){
	if(k==0) return 1;
	else{
		if(k%2==0){
			ll s=poww(n,k/2);
			return s*s;
		}
		else if(k%2!=0){
			return poww(n,k-1)*n;
		}
	}
}
void ham(ll n,ll k){
	if(n==1) cout<<1<<endl;
	else{
		ll t=poww(2,n)/2;
		if(k==t) cout<<n<<endl;
		else if(k<t) ham(n-1,k);
		else if(k>t) ham(n-1,k-t);
 		
	}
}
main(){
	ll t;
	cin>>t;
	while(t-->0){
		cin>>n>>k;
		ham(n,k);
	}
}
