#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n, A[1000], F[1000];
main(){
	cin >> n;
	for( int i = 1; i <=n; i++ ) cin >> A[i];
	A[0] = 0;
	F[0] = 0;
	for( int i = 1; i <= n; i++ ){
	   F[i]=1;
	  for(int j = i-1; j >=1; j-- ){
	  	if( A[i] > A[j] ) F[i]= max(F[i],F[j]+1);
	  }
	}
	ll dmax=0;
	for(int i=1;i<=n;i++){
		if(dmax<F[i]) dmax=F[i];
	}
	cout<<dmax;
}
