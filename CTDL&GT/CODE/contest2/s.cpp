#include<bits/stdc++.h>
using namespace std;
long long n,k,a[100000];
long long ham(long long l,long long r){
	while(r>=l){
		long long mid=l+(r-l)/2;
		if(a[mid]==k) return mid;
		else if(a[mid]>k) r=mid-1;
		else if(a[mid]<k) l=mid+1;
	}
	return 0;
}
main(){
	int t;
	cin>>t;
	while(t-->0){
		cin>>n>>k;
		for(int i=1;i<=n;i++) cin>>a[i];
		if(ham(1,n)==0) cout<<"NO";
		else cout<<ham(1,n);
		cout<<endl;
	}
}
