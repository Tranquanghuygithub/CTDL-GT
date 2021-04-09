#include<bits/stdc++.h>
using namespace std;
#define maxn 1005
int n,m,a[maxn][maxn],f[maxn][maxn];
void init(){
    cin>>m>>n;
    for (int i=1;i<=m;i++)
        for (int j=1;j<=n;j++){
           cin>>a[i][j];
            f[i][j]=1;
        }
}
int min(int a, int b, int c){
    a=min(a,b);
    return min(a,c);
}
void ham(){
    int res=0,t=0;
    for(int i=2;i<=m;i++)
        for (int j=2;j<=n;j++){
            if(a[i][j]==a[i-1][j-1] && a[i][j]==a[i-1][j] && a[i][j]==a[i][j-1]&&a[i][j]==1){
                f[i][j]=min(f[i-1][j-1], f[i-1][j], f[i][j-1])+1;
                t=1;
            }
            if(f[i][j] > res) res=f[i][j]; 
        }
        if(t==1)cout <<res<< endl;
        else cout<<0<<endl;
        
}

main(){
	ios_base::sync_with_stdio(0);cin.tie(NULL);
	int t;
	cin>> t;
	while(t--){
		init();
    	ham();
	}
}
