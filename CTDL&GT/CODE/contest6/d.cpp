#include<bits/stdc++.h>
#include<queue>
using namespace std;
#define ll long long
ll r,c,A[55][55],dem=0,Max=0;
bool chuaxet[55][55];
typedef struct{
	int x;
	int y;
}data;
ll ham(ll i,ll j){
	memset(chuaxet,true,sizeof chuaxet);
	queue<data> Q;
	//chuaxet[i][j]=false;
	for(int i=1;i<=r;i++)
	for(int j=1;j<=c;j++){
		if(A[i][j]&&chuaxet[i][j]) {
			data z;
			z.x=i;
			z.y=j;
			Q.push(z);
		}
	}
	while(1){
		if(Q.empty()) return dem;
		data tmp=Q.front();
		Q.pop();
		chuaxet[tmp.x][tmp.y]=false;
		ll u=tmp.x;
		ll v=tmp.y;
	if(A[u][v+1]&&chuaxet[u][v+1]&&v<=c) dem++;
	if(A[u][v-1]&&chuaxet[u][v-1]&&v>0) dem++;
	if(A[u-1][v]&&chuaxet[u-1][v]&&u>0)dem++;
	if(A[u+1][v]&&chuaxet[u+1][v]&&u<=r) dem++;
	if(A[u-1][v+1]&&chuaxet[u-1][v+1]&&v<=c&&u>0)dem++;
	if(A[u+1][v+1]&&chuaxet[u+1][v+1]&&v<=c&&u<=r)dem++;
	if(A[u-1][v-1]&&chuaxet[u-1][v-1]&&v>0&&u>0) dem++;
	if(A[u+1][v-1]&&chuaxet[u+1][v-1]&&v>0&&u<=r) dem++;	
	}
}
main(){
	cin>>r>>c;
	//nhap
	for(int i=1;i<=r;i++)
	for(int j=1;j<=c;j++)
	{
		char s;
		cin>>s;
		if(s=='o') A[i][j]=1;
		else if(s=='.') A[i][j]=0;
	}
	//xu li
	int k=0;
	for(int i=1;i<=r;i++)
	for(int j=1;j<=c;j++)
	 {
	 	if(A[i][j]==0){
	 		k=1;
	 		A[i][j]=1;
	 		dem=0;
	 		ham(i,j);
	 		Max=max(Max,dem);
	 		//cout<<Max;
	 		A[i][j]=0;
		 }
   	 }
   	 if(k==0){
   	 	dem=0;
   	 	ham(1,1);
   	 	cout<<dem<<endl;
   	 	return 0;
		}
   	 cout<<Max;
}
