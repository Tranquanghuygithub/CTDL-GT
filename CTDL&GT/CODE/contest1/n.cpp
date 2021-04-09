#include<bits/stdc++.h>
using namespace std;
int a[100000],b[100000];
int n;
bool x[20];
int dem=0;
void nhapa(){
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>b[i];
	}
}
void sxep(){
	for(int i=1;i<=n-1;i++) 
	for(int j=n;j>i;j--){
		if(b[j]<b[j-1]) {
			swap(a[j],a[j-1]);
			swap(b[j],b[j-1]);
		}
	}
}
void xuat(){
	for(int i=1;i<=n;i++){
		cout<<endl<<a[i]<<" "<<b[i];
		cout<<endl;
	}
}
void kq(){
    cout<<dem<<endl;
}
void thamlam(){
	int i=1;
	x[1]=true;
	dem=1;
	//khoi tao
	for(int j=2;j<=n;j++){
		if(a[j]>=b[i]){
			dem++;
			i=j;
			x[i]=true;
		}
	}
	for(int i=1;i<=n;i++) if(x[i]) cout<<i<<" ";
//	kq();
}
main(){
	cin>>n;
	nhapa();
	memset(x,false,sizeof(x));
	sxep();
	xuat();
	thamlam();
}
