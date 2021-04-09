#include<bits/stdc++.h>
using namespace std;
long long n,a[100005];
void xuat( ){
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<endl;
}
void ham(long long l,long long r){
	long long t=a[(l+r)/2];
	long long i=l,j=r;
	while(i<=j){
		
	while(t>a[i] ) i++;
	while(t<a[j])j--;
	if(i<=j){
		swap(a[i],a[j]);
		i++;
		j--;
	}}
	if(i<r) ham(i,r);
	if(j>l) ham(l,j);
}
main(){
	int t;
	cin>>t;
	while(t-->0){
		cin>>n;
		for(int i=0;i<n;i++)cin>>a[i];
		ham(0,n-1);
		xuat();
	}
	
}
