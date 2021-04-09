#include<bits/stdc++.h>
using namespace std;
void ham(int &n,int a[],int &d,int &k){
	for(int i=k;i>=0;i--){
		if(n>=a[i]){
			n=n-a[i];
			d++;
		}
		if(n>=a[i])ham(n,a,d,i);
	}	
}
main(){
	int a[10]={1, 2, 5, 10, 20, 50, 100, 200, 500};
	int t;
	cin>>t;
	while(t-->0){
		int n;
		int dem=0;
		cin>>n;
		int k=8;
		ham(n,a,dem,k);
		cout<<dem<<endl;
	}
}
