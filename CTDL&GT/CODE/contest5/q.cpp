#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define aa for(int i=1;i<=n;i++)cin>>A[i];
ll B[100005];
ll n,k,A[100005];
void ham(){
	memset(B,0,sizeof(B));
	B[0]=1;
	B[k]=0;
	for(ll i=1;i<=n;i++){
		for(ll j=k;j>=A[i];j--){
			if(B[j-A[i]]==1) B[j]=1;
		}
	}
	if(B[k]==1) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
main(){
	ll t;
	cin>>t;
	//co so QHD bai nay laf voi tong =k ta suw dung mang luu gia tri tuwf
	//0->k(laf mangr co tong = o->k ?.)
	// va so sanh k-A[i]== gia tri truoc do ko neu = thif no cos tong =k
	while(t-->0){
		cin>>n>>k;
		aa;
		ham();
	}
}
