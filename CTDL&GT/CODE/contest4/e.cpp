#include<bits/stdc++.h>
#include<stack>
using namespace std;
long long a[100005],n;
long long L[100005],R[100005];
void min_right(){
	//tim kiem phan tu ben phai nho hon no gan nhat co the
	stack <int> S;
	S.push(n+1);
	a[n+1]=1e9;
	for(int i=n;i>=1;i--){
		while(!S.empty() && a[S.top()]>=a[i] ) S.pop();
		if(!S.empty()) R[i]=S.top();
		else R[i]=n+1;
		S.push(i);
	}
	
}
void min_left(){
	//tim kiem phan tu ben trai nho hon no gan nhat co the
	stack <int> S;
	a[0]=1e9;
	S.push(0);
	for(int i=1;i<=n;i++){//khi tim ben naof thi gan dau ben do =gia tri lien ke vaf vong for phai chay tu daauf ben do
		while(!S.empty() && a[S.top()]>=a[i] ) S.pop();
		if(!S.empty()) L[i]=S.top();
		else L[i]=0;
		S.push(i);
	}
}
long long ham(){
	min_left();
	min_right();
	long long kq=0,s=0;
	for(int i=1;i<=n;i++){
		long long t=0;
		if((R[i]-L[i]-1)>=a[i]) t=a[i];
		kq=max(kq,t);
	}
	return kq;
	
}
main(){
	long long t;
	cin>>t;
	while(t-->0){
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		cout<<ham()<<endl;
	}
}
