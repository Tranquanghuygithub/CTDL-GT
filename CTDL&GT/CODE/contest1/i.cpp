#include<bits/stdc++.h>
using namespace std;
int a[50][50],Cmin,ff=0,ak=1;
int n;
int S=0;
bool xet[50];
int x[50];
void nhap(){
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	cin>>a[i][j];
}
void min(){
	Cmin=a[1][2];
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	{
		if(a[i][j]<Cmin&&a[i][j]!=0) Cmin=a[i][j];
	}
}
int Sum(){
	int sum=0;
	for(int i=1;i<=n;i++)
		sum+=a[x[i]][x[i+1]];
	sum+=a[x[n]][1];
	return sum;
}
void Update(){
	if(Sum()<ff||ak==1){
		ak=0;
		ff=Sum();
	}
}
void quaylui(int k){
	for(int i=2;i<=n;i++){
		if(xet[i]){
			x[k]=i;xet[i]=false;
			S+=a[x[k-1]][x[k]];
			if(k==n) Update();
			else if(S+(n-k+1)*Cmin<ff) quaylui(k+1);
			    else if(ak) quaylui(k+1);
			xet[i]=true;S=S-a[x[k-1]][x[k]];
		}
	}
}
main(){
	cin>>n;
	nhap();
	min();
	x[1]=1;
	memset(xet,true,sizeof xet);
	quaylui(2);
	cout<<ff<<endl;
	
}
