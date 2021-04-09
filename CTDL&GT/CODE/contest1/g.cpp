#include<bits/stdc++.h>
using namespace std;
int n=8,f=0,Sum=0;
int x[50],a[100][100];
bool xuoi[100],nguoc[100],cot[100];
void nhap(){
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	 cin>>a[i][j];
}
void hau(int i){
	for(int j=1;j<=n;j++){
		if(cot[j]&&xuoi[i-j+n]&&nguoc[i+j-1]){
			x[i]=j;
			Sum+=a[i][j];
			cot[j]=false;
			xuoi[i-j+n]=false;
			nguoc[i+j-1]=false;
			if(i==n&&f<Sum) f=Sum;
			else hau(i+1);
			Sum-=a[i][j];
			cot[j]=true;
			xuoi[i-j+n]=true;
			nguoc[i+j-1]=true;

		}
	}
}
main(){
	nhap();
	memset(cot,true,sizeof cot );
	memset(xuoi,true,sizeof xuoi );
	memset(nguoc,true,sizeof nguoc);
	hau(1);
	cout<<f;
}
