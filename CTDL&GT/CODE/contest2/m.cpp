#include<bits/stdc++.h>
using namespace std;
long long n,k,a[100000];
void nhap(){
	for(int i=1;i<=n;i++)cin>>a[i];
}
void sort(long long l,long long r){
	long long t=a[(l+r)/2];
	long long i=l,j=r;
	while(i<=j){
		while(a[i]<t)i++;
		while(a[j]>t) j--;
		if(i<=j){
			swap(a[i],a[j]);
			i++;
			j--;
		}
	}
	if(l<j) sort(l,j);
	if(r>i) sort(i,r);
}
void xuat(){
	for(int i=1;i<=n;i++) cout<<a[i]<<" ";
}
main(){
	cin>>n>>k;
	nhap();
	long long s=a[1];
	sort(2,n);
	for(int i=n-k+1;i<=n;i++){
		s+=a[i];
	}
	for(int i=2;i<=n-k;i++){
		s-=a[i];
	}
	cout<<s;
	
}
