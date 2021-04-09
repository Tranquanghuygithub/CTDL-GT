#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a,b,A[100][100],ak=0,S=0,Mix=0;
ll C[100][100];
typedef struct{
	int x;
	int y;
}data;
int check(data d,data c){
	if(d.x==c.x && d.y==c.y) return 1;
	return 0;
}
void ham(data d,data c){
	C[d.x][d.y]=1;
	// ben trai
	if(check(d,c)){
		if(S<Mix || ak==0){
			ak=1;
			Mix=S;
		}
	}
	data z=d;
	z.y--;
	if( z.y>=1 && C[z.x][z.y]==0){
		S+=A[z.x][z.y];
		ham(z,c);
	}
	//ben phai
	z=d;
	z.y++;
	if( z.y<=b  && C[z.x][z.y]==0){
		S+=A[z.x][z.y];
		ham(z,c);
	}
	// cheo	duoi trai
	z=d;
	z.x++;
	z.y--;
	if( z.y>=1 && z.x<=a && C[z.x][z.y]==0 ){
		S+=A[z.x][z.y];
		ham(z,c);
	}
	//cheo duoi phai
	z=d;
	z.x++;
	z.y++;
	if( z.y<=b && z.x<=a && C[z.x][z.y]==0 ){
		S+=A[z.x][z.y];
		ham(z,c);
	}
	
}
main(){
	data d,c;
	d.x=1;
	d.y=1;
	cin>>a>>b;
	for(int i=1;i<=a;i++)
	for(int j=1;j<=b;j++)
	 cin>>A[i][j];
	c.x=a;
	c.y=b;
	ham(d,c);
	cout<<Mix<<endl;
	
}
