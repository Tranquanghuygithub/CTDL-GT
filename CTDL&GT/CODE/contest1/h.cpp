#include<bits/stdc++.h>
using namespace std;
int n,k,s;
int a[50];
int dem=0;
int tong(){
	int sum=0;
	for(int i=1;i<=k;i++){
		sum+=a[i];
	}
	return sum;
}
void xuat(){
	for(int i=1;i<=k;i++) cout<<a[i];
	cout<<endl;
}
void update(){
	if(tong()==s) dem++;
	if(tong()>s) return;
}
void th(int j){
	for(int i=a[j-1]+1;i<=n-k+j;i++){
		a[j]=i;
		if(j==k) update();
		else{
			th(j+1);
		}
	}
	
	
	
}
main(){
	//neu lam theo cach sinh to hop binh thuong se bi qua time
	ios::sync_with_stdio(0);cin.tie(0);
	while(1){
	cin>>n>>k>>s;
	 dem=0;
	if(n==0&&k==0&&s==0) break;
	a[0]=0;
	th(1);
	cout<<dem<<endl;
	}
}
