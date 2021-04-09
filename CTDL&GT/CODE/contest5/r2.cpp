#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll n,k;
ll TH(ll n,ll k){
	ll c[k+1];
	memset(c,0,sizeof(c));
	c[0]=1;
	for(ll i=1;i<=n;i++)
	for(ll j=min(i,k);j>=1;j--){
		c[j]=(c[j]+c[j-1])%mod;
	}
	return c[k];
}
int main(){
//	ios_base::sync_with_stdio(0);cin.tie(NULL);
	ll t;
	cin>>t;
	while(t-->0){
		cin>>n>>k;
		if(k==0) cout<<0<<endl;
		else if(9*n<k) cout<<0<<endl;
		else if(k<10) cout<<TH(k+n-2,k-1)<<endl;//C(K,N+K-1)
		if(9*n==k) cout<<1<<endl;
		else if(k>=10){
			ll n1=TH(k-2+n,k-1)%mod;
			ll n2=TH(k+n-11,k-10)%mod;
			ll n3=TH(k+n-12,k-11)%mod;
			ll kq=0;
			for(ll i=1;i<=n;i++){
				if(i*9<k) kq=i;
			}
			if(kq==1) cout<<(n1-n2-(n-1)*n3)<<endl;
			else if(kq>1){
				ll n4=0,n5=0;
				for(int i=1;i<kq;i++){//co the thieu truong hop kq=3 nhung n-1<kq
				     n4+=pow(-1,i+1)*TH(n-1,i)*TH(k-10*i+n-11,k-10*i-10);
				     n4=n4%mod;
				}
				for(int i=2;i<=kq;i++){//co the thieu truong hop kq=3 nhung n-1<kq
					n5+=pow(-1,i)*TH(n-1,i)*TH(k-10*i+n-2,k-10*i-1);
					n5=n5%mod;
				}
				cout<<n1<<endl<<n2<<endl<<n3<<endl<<n4<<endl<<n5<<endl;
//				cout<<(n1-n2-(n-1)*n3+n4+n5)<<endl;	
				//cout<<n5;			
			}
		}
}}



