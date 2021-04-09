#include<bits/stdc++.h>
using namespace std;
long long x;
long long  ham(long long n,long long k){
	if(k==0) return 1;
	if(k%2==0){
		long long s;
		s=ham(n,k/2);
		return s*s%(123456789);
    }
	else return n*ham(n,k-1)%(123456789);
}
main(){
	long long t;
	cin>>t;
	while(t-->0){
		cin>>x;
		cout<<ham(2,x-1)<<endl;
	}
}
