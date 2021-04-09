#include<bits/stdc++.h>
using namespace std;
int n;
int ham(int k){
	int s=0;
	while(k>0){
		s+=k%10;
		k=k/10;
	}
	if(s==n) return 1;
	else return 0;
}
main(){
	cin>>n;
	int dem=0;
	for(int i=1000;i<=9999;i++){
		if(ham(i)) {dem++;	cout<<i<<endl;	}
	}
	cout<<endl<<dem;
}
