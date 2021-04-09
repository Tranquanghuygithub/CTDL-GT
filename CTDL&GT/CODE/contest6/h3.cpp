#include<bits/stdc++.h>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
using namespace std;
#define ll long long
#define db double
ll k,n,m;
ll C[1005];//mang coONG 
ll A[1005];//mang nhap so nguoi
ll B[1005][1005];//mang phu duyet dfs;
bool chuaxet[1005];
void ham(ll u){
	chuaxet[u]=false;
	for(int i=1;i<=n;i++){//cacs dinh
		if(chuaxet[i]&&B[u][i]){
			C[i]++;
			ham(i);
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(NULL);
	cin>>k>>n>>m;
	// nhap  so nguoi bdau tu dau;
	for(int i=1;i<=k;i++) cin>>A[i];
	//nhap so duong di
	for(int i=1;i<=m;i++){
		ll a,b;
		cin>>a>>b;
		B[a][b]=1;
	}
	//thuc hien
	for(int i=1;i<=k;i++){
		C[A[i]]++;
		memset(chuaxet,true,sizeof chuaxet);
		ham(A[i]);
	}
	ll dem=0;
	for(int i=1;i<=n;i++){
		if(C[i]==k) dem++;
	}
	cout<<dem<<endl;
}
