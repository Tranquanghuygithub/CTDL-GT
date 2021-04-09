#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll A[1005][1005],n;
main(){
	cin>>n;
	for(ll i =1;i<=n;i++)
	for(ll j=1;j<=n;j++)
	 {
	 	cin>>A[i][j];
	 }
	 
    for(ll i =1;i<=n;i++){
	for(ll j=1;j<=n;j++)
	 {
	 	if(A[i][j]==1) cout<<j<<" ";
	 }
	 cout<<endl;
    }
}
