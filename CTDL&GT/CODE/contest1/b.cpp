#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,k, A[100];
bool chuaxet[50];
int TH(){
	int i=k;
	while(A[i]==n-k+i){
		i--;
	}
	if(i==0) return 0;
	else{
		A[i]++;
		for(int j=i+1;j<=k;j++) A[j]=A[j-1]+1;
	}
	return 1;
}
void xuat(){
	for(int i=1;i<=k;k++) cout<<A[i]<<" ";
	cout<<endl;
}
main(){
	ll t;
	cin>>t;
	while(t-->0){
		cin>>n>>k;
		memset(chuaxet,true,sizeof(chuaxet));
		for(int i=1;i<=k;i++){
			cin>>A[i];
			chuaxet[A[i]]=false;
		}
		
		if(TH()==0) cout<<k<<endl;
		else{
			ll l=0;
			for(int i=1;i<=k;i++){
				if(!chuaxet[i]) l++;
			}
			cout<<k-l<<endl;
		}
	}
	
}
