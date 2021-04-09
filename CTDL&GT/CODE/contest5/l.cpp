#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,A[105],B[105];
void sxep(ll l,ll r){
	ll t=A[(l+r)/2];
	int i=l,j=r;
	while(i<=j){
		while(A[i]<t) i++;
		while(A[j]>t) j--;
		if(i<=j){
			swap(A[i],A[j]);
			swap(B[i],B[j]);
			i++;
			j--;
		}
		
	}
	if(i<r) sxep(i,r);
	if(j>l) sxep(l,j);
}
void ham(){
	ll S=A[1]+B[1];
	for(int i=2;i<=n;i++){
		if(S<A[i]) S=A[i]+B[i];
		else S=S+B[i];
	}
	cout<<S<<endl;
}
main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>A[i];
		cin>>B[i];
	}
	sxep(1,n);
	ham();
	
}
