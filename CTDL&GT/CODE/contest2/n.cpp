#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n, A[100], Min=1e9+5,  B[100];
bool C[100];
void ham (ll chua, ll cay, ll k){
	for ( int i = 1;i <= n; i++){
		if( C[i] ){
			C[i]=false;
			chua*=A[i];
			cay+=B[i];
			Min = min ( abs(chua-cay), Min );
			if( k <n ) ham(chua, cay, k+1 );
			C[i]=true;
			chua /= A[i];
			cay-=B[i];
		}
	}
}
main(){
	// doi voi bai nao ma tinh bang sinh nhi phan cot nhat la tinh truc tiep  dai luong do 
	//tranh dc sai sot
	
	cin>>n;
	for(int i=1;i<=n;i++) cin>>A[i]>>B[i];
	memset(C,true,sizeof(C));
	ham(1,0,0);
	cout<<Min<<endl;
}
