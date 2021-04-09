#include<bits/stdc++.h>
using namespace std;
int dem=0;
int a[20][20];
bool x[20];
int c[20];
int n,k;
void nhap(){
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	  cin>>a[i][j];
}
int tong(){ 
	int sum=0;
	for(int i=1;i<=n;i++)
	 sum+=a[i][c[i]];
	 return sum;
}
void update(){
	if(tong()==k) dem++;
}
void hv1(int j){
	for(int i=1;i<=n;i++){
		if(x[i]){
			x[i]=false;
			c[j]=i;
			if(j==n) update();
			else hv1(j+1);
			x[i]=true;
		}
	}
}
void xuat(){
	for(int i=1;i<=n;i++) cout<<c[i];
	cout<<endl;
}
void ff(){
	if(tong()==k) xuat();
}
void hv(int j){
	for(int i=1;i<=n;i++){
		if(x[i]){
			x[i]=false;
			c[j]=i;
			if(j==n) ff();
			else hv(j+1);
			x[i]=true;
		}
	}
}
main(){
	cin>>n>>k;
	nhap();
	memset(x,true,sizeof x);
	hv1(1);
	cout<<dem<<endl;
	hv(1);
}
