#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include<bits/stdc++.h>
using namespace std;
long long n,m,dem=0;
int ngto(long long b){
	if(b<2) return 0;
	else if((b%2==0&&b>2)||(b%3==0&&b>3)||(b%5==0&&b>5)||(b%7==0&&b>7)||(b%9==0&&b>9)||(b%11==0&&b>11)) return 0;
	else {
		for(int i=2;i<sqrt(b);i++){
			if(b%i==0) return 0;
		}
	}
	return 1;
}
main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
	cin>>n>>m;
	int k=m;
	if(k%2==0) k=k+1;
	while(dem<n){
		if(ngto(k)) {	cout<<k<<" ";dem++;	}
		k+=2;
	}
}
