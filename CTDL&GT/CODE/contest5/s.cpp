#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define Max 104
ll n;
ll f[10][Max];
void ham(){
	//moi chu so nhan gia tri tu 0-9
	for(int i=0;i<=9;i++) f[i][1]=1;//co so qhd
	//
	for(int i=2;i<Max;i++)//cot
	for(int j=0;j<=9;j++)
	for(int k=j;k<=9;k++){//moi phan tu tai dong k cot i se bang tong cacs phan tu owr phia tren nos<cacs phan tu coot ben canh>
		f[k][i]+=f[j][i-1];
		f[k][i]=f[k][i]%mod;
	}
}
main(){
	ham();
	ll t;
	cin>>t;
	while(t-->0){
		cin>>n;
		ll kq=0;
		for(int i=0;i<=9;i++){
			kq+=f[i][n];
			kq=kq%mod;
			
		}
		cout<<kq<<endl;
	}
}
