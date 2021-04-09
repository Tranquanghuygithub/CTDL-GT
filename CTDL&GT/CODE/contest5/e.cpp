#include<bits/stdc++.h>
using namespace std;
long long n,A[100005];
void xuat(){
	for(int i=0;i<n;i++) cout<<A[i]<<" ";
	cout<<endl;
}
void mega(long long l,long m,long long r){
	long long n1=m-l+1;
	long long n2=r-m;
	long long L[n1],R[n2];
	for(int i=0;i<n1;i++) L[i]=A[l+i];
	for(int i=0;i<n2;i++)R[i]=A[m+1+i];
	//hopnhat
	long long i=0,j=0,k=l;
	while(i<n1&&j<n2){
		if(L[i]<=R[j]){
			A[k++]=L[i];
			i++;
		}
		else{
			A[k++]=R[j];
			j++;			
		}
	}
	while(i<n1){
		A[k++]=L[i];
		i++;
	}
	while(j<n2){
		A[k++]=R[j];
		j++;
	}
}
void megasort(long long l,long long r){
	if(l<r){
		long long m=l+(r-l)/2;
		megasort(l,m);
		megasort(m+1,r);
		mega(l,m,r);
	}
}
main(){
		cin>>n;
		for(int i=0;i<n;i++)cin>>A[i];
		megasort(0,n-1);
		xuat();
	
}
