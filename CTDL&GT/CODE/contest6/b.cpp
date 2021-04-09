#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,A[1005][1005];
void ham(){
	char s[20000],c[2];
	gets(c);
	for(int i=1;i<=n;i++){
		gets(s);
		char *k= strtok(s," ");
		while(k!=NULL){
			ll t=atoi(k);
			A[i][t]=1;
			k=strtok(NULL," ");
		}
	}
}
main(){
	cin>>n;
	ham();
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++){
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
}
