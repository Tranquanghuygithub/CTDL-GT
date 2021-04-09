#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,A[100005];
main(){
	ll t;
	cin>>t;
	while(t-->0){
		cin>>n;
		for(int i=1;i<=n;i++) cin>>A[i];
		sort(A+1,A+n+1);
		ll c=1e9,dem=0;
		for(int i=n;i>=2;i--){
			ll t=abs(A[i]-A[i-1]);
			if(t<c){
				c=t;
				dem=1;
			}
			else if(t==c)	dem++;
		}
		cout<<c<<" "<<dem<<endl;
	}
}
