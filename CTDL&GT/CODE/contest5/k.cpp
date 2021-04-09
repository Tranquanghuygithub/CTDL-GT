#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Max 100005
#define aa for(int i=1;i<=n;i++) cin>>A[i];
#define bb for(int i=1;i<=n;i++) cin>>B[i];
ll A[Max],B[Max],n,k;
ll C[Max];
bool c[Max];
void sxep(ll l,ll r){
	ll t=C[(l+r)/2];
	ll i=l,j=r;
	while(i<=j){
		while(C[i]<t) i++;
		while(C[j]>t) j--;
		if(i<=j){
			swap(A[i],A[j]);
			swap(C[i],C[j]);
			swap(B[i],B[j]);
			i++;
			j--;
		}
	}
	if(i<r) sxep(i,r);
	if(j>l) sxep(l,j);
}
void ham(){
	ll S=0;
	for(int i=1;i<=n;i++){
		if(i<=k)S+=A[i];
		else if(i>k) S+=B[i];

	}
	cout<<S<<endl;
}
main(){
	cin>>n>>k;
	aa;
	bb;
	//mang phu
	for(int i=1;i<=n;i++) C[i]=A[i]-B[i];
	sxep(1,n);
	ham();
	
}
