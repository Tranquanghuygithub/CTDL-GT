#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll m,n,L[1000],R[1000];
ll dem[1000]
,a[1000][1000];
void min_right(){
	//tim kiem phan tu ben phai nho hon no gan nhat co the
	stack <ll> S;
	S.push(m+1);
	dem[m+1]=505;
	for(ll i=m;i>=1;i--){
		while(!S.empty() && dem[S.top()]>=dem[i] ) S.pop();
		if(!S.empty()) R[i]=S.top();
		else R[i]=m+1;
		S.push(i);
	}
	
}
void min_left(){
	//tim kiem phan tu ben trai nho hon no gan nhat co the
	stack <ll> S;
	dem[0]=505;
	S.push(0);
	for(ll i=1;i<=m;i++){//khi tim ben naof thi gan dau ben do =gia tri lien ke vaf vong for phai chay tu daauf ben do
		while(!S.empty() && dem[S.top()]>=dem[i] ) S.pop();
		if(!S.empty()) L[i]=S.top();
		else L[i]=0;
		S.push(i);
	}
	
}
long long ham(){
	min_left();
	min_right();
	ll kq=0,s=0;
	for(ll i=1;i<=n;i++){
		ll t=0;
		if((R[i]-L[i]-1)>=dem[i]) t=dem[i];
		kq=max(kq,t);
	}
	return kq;
	
}
main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL);
	long long t;
	cin>>t;
	while(t-->0){
		cin>>n>>m;//n dong ,m cot
		long long kq=0;
		memset(dem,0,sizeof(dem));
		
		for(ll i=1;i<=n;i++){
		  for(ll j=1;j<=m;j++){
		    cin>>a[i][j];
		    if(a[i][j]==1)dem[j]++;
		    else if(a[i][j]==0) dem[j]=0;
		    kq=max(kq,ham());
	}//end for(j
   }  //end for i
   cout<<kq<<endl;
  }//end for while
}//end main
