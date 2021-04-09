#include<bits/stdc++.h>
using namespace std;
long long n,k,a[10005];
const long long MOD = 1000000007;
long long ham(){
	memset(a,0,sizeof a);
	a[0]=1;
	a[1]=1;
	for(int i=2;i<=n;i++){
		a[i]=0;
	   for(int j=1;j<=i&&j<=k;j++){
	   	a[i]=(a[i]+a[i-j])%MOD;
	   }
	}
	return a[n];
}
main(){
	long long t;
	cin>>t;
	while(t-->0){
		cin>>n>>k;
		cout<<ham()<<endl;
	}
}
