#include<bits/stdc++.h>
using namespace std;
int n;
int x[20];
bool xuoi[40],nguoc[40];
bool cot[20];
int dem=0;
void hau(int i){
	for(int j=1;j<=n;j++){
		if(cot[j]&&xuoi[i-j+n]&&nguoc[i+j-1]){
			//x[i]=j;
			cot[j]=false;
			xuoi[i-j+n]=false;
			nguoc[i+j-1]=false;
			if(i==n)dem++;
			else hau(i+1);
			cot[j]=true;
			xuoi[i-j+n]=true;
			nguoc[i+j-1]=true;

		}
	}
}
main(){
	cin>>n;
	memset(cot,true,sizeof cot );
	memset(xuoi,true,sizeof xuoi );
	memset(nguoc,true,sizeof nguoc);
	hau(1);
	cout<<dem;
}
