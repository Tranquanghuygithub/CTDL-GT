#include<bits/stdc++.h>
using namespace std;
long long  ham(int n,int k){
	if(k==0) return 1;
	long long s;
	if(k%2==0){
		long long s;
		s=ham(n,k/2);
		return s*s%(1000000007);
    }
	else return n*ham(n,k-1)%(1000000007);
}
main(){
	int t;
	int n,k;
	cin>>t;
	while(t-->0){
		cin>>n>>k;
		cout<<ham(n,k);
		cout<<endl;
	}
}
