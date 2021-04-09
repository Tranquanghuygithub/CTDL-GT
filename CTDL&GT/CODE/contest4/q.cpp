#include<bits/stdc++.h>
using namespace std;
const long long mod=1000000007;
long long ham(long long h,long long c)
{
	//DOI VOI BAI NAY KHI GAP CU THU SU DUNG QUI HOACHJ DONG
	//VIET TREEN 1 MANGR 1 CHIEU SAU DOS GHI CONG THUC THU XEM 
	//NO LAF TINHS C(K,N) NEN TA CO THE GIAM BOWT K NHA OK
	//NHO KHOI TAO GIA TRI DAAUF NUWAX LAF OK 
	//DEEX VCLW
	long long d[1005];
	memset(d,0,sizeof(d));
	d[0]=1;
	for(long long i=1;i<=h;i++)
	  for(long long j=min(i,c);j>=1;j--){
		d[j]=(d[j-1]+d[j])%mod;
	}
	return d[c];
}
main(){
	long long c,h,t;
	cin>>t;
	while(t-->0){
		cin>>h>>c;
		cout<<ham(h,c)<<endl;;
	}
	
}
