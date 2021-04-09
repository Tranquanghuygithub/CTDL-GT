#include<bits/stdc++.h>
using namespace std;
long long t;
string s;
long long kq(long long t,long long n){
	long long k=1;
	while(t*k<n){
		k=k*2;
	}
	return t*k;
}
void ham(long long k,long long n){
	if(n<=t) cout<<s[k-1];
	else if(k<=(n/2)) ham(k,n/2);
	else if(k>(n/2)){
		if((k-1)==n/2)ham(n/2,n/2);
		else {
			long long t=(k-1)%(n/2);
			ham(t,n/2);
		}
	}
}
main(){
	long long n;
	cin>>s;
	cin>>n;
	t=s.size();
	long long q=kq(t,n);
	ham(n,q);
}
