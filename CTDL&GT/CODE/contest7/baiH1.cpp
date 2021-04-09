#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,k,s,dem=0;
void ham(ll i,ll m,ll sum){
	if(m==0){
		if(sum==s) dem++;
	}
	else{
		for(int j=i+1;j<=n;j++){
			ham(j,m-1,sum+j);
		}
	}
}
main(){
	while(1){
		cin>>n>>k>>s;
		dem=0;
		if(n==k&&k==s&&s==0) return 0;
		ham(0,k,0);
		cout<<dem<<endl;
	}
}
