#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,k,A[100];
ll Min=0,ak=1;
void ham( ll i ,ll dem,ll tong){
	if(tong==k){
		if(dem<Min||ak){
			ak=0;
			Min=dem;
		}
	}
	else if ( tong < k){
		for(int j=i-1;j>=1;j--){
			ham(j,dem+1,tong+A[j]);
		}
	}
}
main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++) cin>>A[i];
//	sort(A+1,A+n+1);
	ham(n+1,0,0);
	//f(ak==0)cout<<Min<<endl;
//	else cout<<-1<<endl;
    cout<<Min<<endl;

}
