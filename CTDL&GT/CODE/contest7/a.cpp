#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,kq=0;
ll cha[100005],Size[100005];
void init() {
    for (ll i=0; i<=n; i++) {
        cha[i] = i;
        Size[i]=1;
    }
}

ll Find(ll u) {
    if (cha[u] != u) cha[u] = Find(cha[u]);
    return cha[u];
}

void join(int u, int v) {
    if (Size[u] > Size[v]) swap(u, v);
    int a=Find(u);
    int b=Find(v);
    cha[u]=a;
    cha[v]=b;
    if(a==b) return;
    cha[a]=cha[b];
    Size[b] += Size[a];
   // Size[a]=Size[b];
   
    

}
main(){
	ios::sync_with_stdio(0);cin.tie(0);
	ll t;
	cin>>t;
	while(t-->0){
		cin>>n>>m;
		init();
	//	memset(C,true,sizeof(C));
		for(ll i=1;i<=m;i++){
			ll a,b;
			cin>>a>>b;
			join(a,b);
		}
		ll Max=0;
		//for(int i=1;i<=n;i++) cout<<cha[i]<<" ";
		for(int i=1;i<=n;i++) {
			if(Max<Size[i]) Max=Size[i];
		//cout<<Size[i]<<" ";
		}
		cout<<Max<<endl;           
	}
	
}
