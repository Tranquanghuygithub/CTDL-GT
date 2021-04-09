#include<bits/stdc++.h>
#include<queue>
using namespace std;
int A[505][505],n,m;//n dong m cot
typedef struct{
	int  x;
	int y;
}data;
int ham(){
	int dem=0,check=1;
	queue <data> P,Q;//q luu p thuc hien
	for(int i=0;i<n;i++)
	 for(int j=0;j<m;j++){
	 	if(A[i][j]==2){
	 		data z;
	 		z.x=i;
	 		z.y=j;
	 		Q.push(z);
		 }
	 }
	 while(1){
	 	if(P.empty()){
	 		if(Q.empty()) break;
	 		dem++;
	 		P=Q;
	 		while(!Q.empty()) Q.pop();
		 }
		 data tmp=P.front();
		 P.pop();
		 //thuc hien
		 data z=tmp;
		 z.x--;
		 if(z.x>=0&&A[z.x][z.y]==1){
		 	A[z.x][z.y]=2;
		 	Q.push(z);
		 }
		 z=tmp;
		 z.x++;
		 if(z.x<n&& A[z.x][z.y]==1){
		 	A[z.x][z.y]=2;
		 	Q.push(z);
		 }
		 z=tmp;
		 z.y--;
		 if(z.y>=0&& A[z.x][z.y]==1){
		 	A[z.x][z.y]=2;
		 	Q.push(z);
		 }
		z=tmp;
		z.y++;
		if( A[z.x][z.y] && z.y<m){
			A[z.x][z.y]=2;
			Q.push(z);
			
		}
	 }
	 for(int i=0;i<n;i++){
	  for(int j=0;j<m;j++){
	  	if(A[i][j]==1) check=0;
	  }
	 }
	 if(check==0) return -1;
	 else return (dem-1);
}
main(){
	cin>>n>>m;
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
	 cin>>A[i][j];
	 cout<<ham();
}
