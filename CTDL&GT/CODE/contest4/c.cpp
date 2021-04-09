#include<bits/stdc++.h>
using namespace std;
long long a[100000],n;
void nhap(){
	for(int i=0;i<n;i++) cin>>a[i];
}
void ham(int j){
	int t=0;
	for(int i=j+1;i<n;i++){
		if(a[j]<a[i]){
			cout<<a[i];
			t=1;
			break;
		}
	}
	if(t==0) cout<<"-1";
}
main(){
	long long t;
	cin>>t;
	while(t-->0){
		cin>>n;
		nhap();
		for(int i=0;i<n;i++){
			ham(i);
		}
		cout<<endl;
	}
}
