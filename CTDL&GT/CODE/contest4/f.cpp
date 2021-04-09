#include<bits/stdc++.h>
using namespace std;
long long m,n,L[505],R[505];
long long dem[505],a[505][505];
void min_right(){
	//tim kiem phan tu ben phai nho hon no gan nhat co the
	stack <int> S;
	S.push(m+1);
	dem[m+1]=505;
	for(int i=m;i>=1;i--){
		while(!S.empty() && dem[S.top()]>=dem[i] ) S.pop();
		if(!S.empty()) R[i]=S.top();
		else R[i]=m+1;
		S.push(i);
	}
	
}
void min_left(){
	//tim kiem phan tu ben trai nho hon no gan nhat co the
	stack <int> S;
	dem[0]=505;
	S.push(0);
	for(int i=1;i<=m;i++){//khi tim ben naof thi gan dau ben do =gia tri lien ke vaf vong for phai chay tu daauf ben do
		while(!S.empty() && dem[S.top()]>=dem[i] ) S.pop();
		if(!S.empty()) L[i]=S.top();
		else L[i]=0;
		S.push(i);
	}
	
}
long long ham1(){
	min_left();
	min_right();
	long long kq=0;
	for(int i=1;i<=m;i++){
		long long t=1LL*dem[i]*(R[i]-L[i]-1);
		kq=max(t,kq);
	}
	return kq;
	
}
void ham(){
	long long kq=0;
	memset(dem,0,sizeof(dem));
	for(int i=1;i<=n;i++){//dong
	for(int j=1;j<=m;j++){//cot
		if(a[i][j]==1)dem[j]++;
		else if(a[i][j]==0) dem[j]=0;
		kq=max(kq,ham1());
	}
	}
	cout<<kq<<endl;
}
main(){
	long long t;
	cin>>t;
	while(t-->0){
		cin>>n>>m;//n dong ,m cot
		for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
		 cin>>a[i][j];
		ham();
		
	}
}
