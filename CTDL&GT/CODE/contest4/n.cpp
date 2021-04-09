#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,k,A[100],B[100];
main(){
	cin>>n>>k          ;
	for( int i= 1; i <=n; i++) cin >> A[ i];
	B[0]=1;
	for ( int i=1; i<=n; i++)
	for( int j=k; j>=A[i]; j--){
		if( B[ i- A[i] ] ==1 ) B[j]=1;
	}
	if(B[k]) cout<<"YES\n";
	else cout<<"NO\n";
}
