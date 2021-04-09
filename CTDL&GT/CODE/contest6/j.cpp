#include<bits/stdc++.h>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
using namespace std;
#define ll long long
#define db double
ll n ,m,q;
ll B[10005][10005];//mang duyet dfs
ll C[10005];//mang luu buoc di;
bool chuaxet[1005];
void ham(ll u,ll v){
	chuaxet[u]=false;
	for(int i=1;i<=n;i++){
		if(chuaxet[i]&&B[u][i]){
			C[i]=1;
			if(i==v)break;
			ham(i,v);
		}
	}
}
main(){
	ios_base::sync_with_stdio(0);cin.tie(NULL);
	ll t;
	cin>>t;
	while(t-->0){
		cin>>n>>m;
		for(int i=1;i<=m;i++){
			ll a,b;
			cin>>a>>b;
			B[a][b]=1;
			B[b][a]=1;
		}
		cin>>q;
		for(int i=1;i<=q;i++){
			ll a,b;
			cin>>a>>b;
			memset(chuaxet,true,sizeof chuaxet);
			memset(C,0,sizeof C);
			ham(a,b);
			if(C[b]==1) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
		
	}
}



