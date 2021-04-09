#include<bits/stdc++.h>
using namespace std;
int n,a[105];
void xuat(int j){
	for(int i=0;i<=j;i++) cout<<a[i]<<" ";
	cout<<endl;
}
main(){
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	cout<<"Buoc 0"<<":"<<" "<<a[0]<<endl;
	for(int i=1;i<n;i++){
		int t=a[i];
		int j=i-1;
		while( j>=0 && t<a[j]){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=t;
		cout<<"Buoc "<<i<<":"<<" ";
		xuat(i);
	}
}
