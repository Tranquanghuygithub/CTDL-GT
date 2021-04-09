#include<bits/stdc++.h>
#include<queue>
using namespace std;
int n,A[100][100];
typedef struct{
	int x;
	int y;
}data;
int check(data d,data c){
	if(d.x==c.x&&d.y==c.y) return 1;
	return 0;
}
int ham(data d,data c){
	if(check(d,c)==1) return 0;
	int dem=0;
	queue <data> P,Q;//p thuc hien ,q luw gia tri
	Q.push(d);
	A[d.x][d.y]=2;
	while(1){
		if(P.empty()){
			dem++;
			P=Q;
			if(!Q.empty()) Q.pop();
		}
		data tmp;
		tmp=P.front();
		P.pop();
		//ben duoi;
		for(int i=tmp.x+1;i<n;i++){
			data z=tmp;
			z.x=i;
			if(A[z.x][z.y]==1){
				A[z.x][z.y]=2;
				if(check(z,c)==1) return dem;
				Q.push(z);
			}
			else if(A[z.x][z.y]==0) break;//neu=2 ko dung vi no dda co duong di van dc xet tiep
		}
		//bentren
	for(int i=tmp.x-1;i>=0;i--){
			data z=tmp;
			z.x=i;
			if(A[z.x][z.y]==1){
				A[z.x][z.y]=2;
				if(check(z,c)==1) return dem;
				Q.push(z);
			}
			else if(A[z.x][z.y]==0) break;//neu=2 ko dung vi no dda co duong di van dc xet tiep
		}
		//bentrai
	for(int i=tmp.y-1;i>=0;i--){
			data z=tmp;
			z.y=i;
			if(A[z.x][z.y]==1){
				A[z.x][z.y]=2;
				if(check(z,c)==1) return dem;
				Q.push(z);
			}
			else if(A[z.x][z.y]==0) break;//neu=2 ko dung vi no dda co duong di van dc xet tiep
		}
		//ben phai	
		for(int i=tmp.y+1;i<n;i++){
			data z=tmp;
			z.y=i;
			if(A[z.x][z.y]==1){
				A[z.x][z.y]=2;
				if(check(z,c)==1) return dem;
				Q.push(z);
			}
			else if(A[z.x][z.y]==0) break;//neu=2 ko dung vi no dda co duong di van dc xet tiep
		}			
	}
}
main(){
	cin>>n;
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++){
		char s;
		cin>>s;
		if(s=='.') A[i][j]=1;
		else if(s=='X') A[i][j]=0;
	}
	data d,c;
	cin>>d.x>>d.y>>c.x>>c.y;
	cout<<ham(d,c);
}
