#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n, k, A[100005];
main(){
	ll t;
	cin>>t;
	while(t-->0){
		cin>>n>>k;
		int *A;
		A= new int[n+1];
		for(int i=0; i<n; i++) cin>>A[i];
		int t=upper_bound(A,A+n,k)-A;
		if(A[t-1]==k) cout<<t<<endl;
		else cout<<"NO"<<endl;
		delete [] A;
	}
}
