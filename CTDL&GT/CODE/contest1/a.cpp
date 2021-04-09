#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,k,A[50],stop=0,dem=0;
ll C[1000];
int x=1;
void xuat(){
	dem++;
	for(int i=1;i<=n;i++){
		C[x++]=A[i];
	}
}
void sinhnp(){
	int i=n;
	while(A[i]) i--;
	if(i==0) stop=1;
	else{
		A[i]=1;
		for(int j=i+1;j<=n;j++) A[j]=0;
	}
}
int ktra(){
	int res=0,dem=0;
	for(int i=1;i<=n;i++){
		if(A[i]==0) dem++;
		else dem=0;
		if(dem>k) return 0;
		if(dem==k) res++;
	}
	if(res==1) return 1;
	return 0;
}
main(){
	cin>>n>>k;
	memset(A,0,sizeof(A));
	while(!stop){
		sinhnp();
		if(ktra()==1)xuat();
	}
	cout<<dem<<endl;
	for(int i=1;i<x;i++){
		if(i%n==0){
			if(C[i]==0) cout<<"A";
			else cout<<"B";
			cout<<endl;
		}
		else{
			if(C[i]==0) cout<<"A";
			else cout<<"B";			
		}
	}
	
}
