#include<bits/stdc++.h>
using namespace std;
int n,a[105];
void xuat( ){
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<endl;
}
main(){
	cin>>n;
	int k=0,m=0;
	for(int i=0;i<n;i++) cin>>a[i];
	
	for(int i=0;i<n-1;i++){
		k=0;
	   for(int j=0;j<=n-1;j++){
	   	if(a[j]<a[j-1]){
	   		swap(a[j],a[j-1]);
	   		k=1;
		   }
	   }
	   m++;
	   if(k==0) break;
	   cout<<"Buoc "<<m<<":"<<" ";
	   xuat();
	}
	
	
}
