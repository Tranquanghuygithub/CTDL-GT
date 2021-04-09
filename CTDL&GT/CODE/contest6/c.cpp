#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,A[1005][1005];
bool chuaxet[1005][1005];
ll dem=0,kq=0;
void ham(ll u, ll v ){
	chuaxet[u][v]=false;
	//	dem++;
	//loang
	if(A[u][v+1]&&chuaxet[u][v+1]&&v<=m) ham(u,v+1);// ben phai
	if(A[u][v-1]&&chuaxet[u][v-1]&&v>0) ham(u,v-1);//ben trai
	if(A[u-1][v]&&chuaxet[u-1][v]&&u>0) ham(u-1,v);//ben tren
	if(A[u+1][v]&&chuaxet[u+1][v]&&u<=n) ham(u+1,v);//ben duoi
	if(A[u-1][v+1]&&chuaxet[u-1][v+1]&&v<=m&&u>0) ham(u-1,v+1);//cheo phai tren
	if(A[u+1][v+1]&&chuaxet[u+1][v+1]&&v<=m&&u<=n) ham(u+1,v+1);//cheo phai duoi
	if(A[u-1][v-1]&&chuaxet[u-1][v-1]&&v>0&&u>0) ham(u-1,v-1);//cheo trai tren
	if(A[u+1][v-1]&&chuaxet[u+1][v-1]&&v>0&&u<=n) ham(u+1,v-1);//cheo trai duoi
	
}
main(){
	   ios::sync_with_stdio(0);
	cin>>n>>m;
	//nhap
	for(int i=1;i<=n;i++)
	for(int j=1;j<=m;j++)
	 {
	 	char s;
	 	cin>>s;
	 	if(s=='W') A[i][j]=1;
	 	else if(s=='.') A[i][j]=0;	
	 }
	 //thuc hien
	 memset(chuaxet,true,sizeof chuaxet);
	 for(ll i=1;i<=n;i++)
	 for(ll j=1;j<=m;j++){
	 	if(A[i][j]&&chuaxet[i][j]){
	 		//dem=0;
	 		ham(i,j);
	 		dem++;
		// if(dem>0) kq++;
	} 
	 }
	 cout<<dem<<endl;
	 
}
