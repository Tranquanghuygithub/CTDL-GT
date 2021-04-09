#include<bits/stdc++.h>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
using namespace std;
#define ll long long
#define db double
ll a,b,c,d,A[8][8],dem=0;
string t1,t2;
bool chuaxet[1005][1005];
typedef struct{
	int x;
	int y;
}data;
void xuli(){
		if(t1[0]=='a') a=1;
		if(t1[0]=='b') a=2;
		if(t1[0]=='c') a=3;
		if(t1[0]=='d') a=4;
		if(t1[0]=='e') a=5;
		if(t1[0]=='f') a=6;
		if(t1[0]=='g') a=7;
		if(t1[0]=='h') a=8;
		b=t1[1]-'0';
		//
		if(t2[0]=='a') c=1;
		if(t2[0]=='b') c=2;
		if(t2[0]=='c') c=3;
		if(t2[0]=='d') c=4;
		if(t2[0]=='e') c=5;
		if(t2[0]=='f') c=6;
		if(t2[0]=='g') c=7;
		if(t2[0]=='h') c=8;	
		d=t2[1]-'0';	
}
int check(data d,data c){
	if(d.x==c.x&&d.y==c.y) return 1;
	return 0;
}
ll ham(data d,data c){
	chuaxet[d.x][d.y]=false;
	dem++;
	//loang
	ll e=d.x;
	ll f=d.y
	if(A[e-1][f-3]&&chuaxet[e-1][f-3]&&(e-1)>=0&&(f-3)>=0) ham()
	
	
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(NULL);
	ll t;
	cin>>t;
	while(t-->0){
		cin>>t1>>t2;
		xuli();
		for(int i=1;i<=8;i++)
		for(int j=1;j<=8;j++)
		 A[i][j]=1;
		 //chuan hoa
	data d,c;
	d.x=b;
	d.y=a;
	c.x=d;
	c.y=c;
	memset(chuaxet,true,sizeof chuaxet);
		ham(d,c);
	}
	return 0;
}



