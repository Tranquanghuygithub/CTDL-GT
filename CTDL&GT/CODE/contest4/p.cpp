#include<bits/stdc++.h>
using namespace std;
const int maxn=505;
int n,m;
void Init(int a[][maxn],int f[][maxn]){
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
void Solve(int a[maxn][maxn],int f[maxn][maxn]){
    int res=0;
    for(int i=2;i<=m;i++)
        for (int j=2;j<=n;j++){
            if(a[i][j]==a[i-1][j-1] && a[i][j]==a[i-1][j] && a[i][j]==a[i][j-1])
                f[i][j]=min(f[i-1][j-1], f[i-1][j], f[i][j-1])+1;
            if(f[i][j] > res) res=f[i][j];  
        }
        cout << res << endl;
        
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int a[maxn][maxn]={0},f[maxn][maxn]={0};
		Init(a,f);
    	Solve(a,f);
	}
    return 0;
}
