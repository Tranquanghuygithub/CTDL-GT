#include<bits/stdc++.h>
using namespace std;
long long n,a[50][50],cmin=100000,F,ak=1;
long long c[100];
bool chuaxet[1000];
void nhap(){
	for(long long i=1;i<=n;i++)
	  for(long long j=1;j<=n;j++){
	  	cin>>a[i][j];
		if(a[i][j]<cmin && i!=j) cmin=a[i][j];
	}
}
long long tong(){
	long long sum=0;
	for(long long i=1;i<=n;i++)
	   sum+=a[c[i]][c[i+1]];
	   return sum;
}
void update(){
	if(F>tong() || ak==1){
		F=tong();
		ak=0;
	}
}
void ham(long long k,long long S){
	for(long long i=1;i<=n;i++){
		if(chuaxet[i]){
			c[k]=i;
			chuaxet[i]=false;
			S+=a[c[k-1]][c[k]];
			if(k==n){
	        	if(F>S|| ak==1){
		        F=S;
		        ak=0;
	}
			}
			else if(k<n){
				if( (S+(n-k+1)*cmin)<F ||ak) ham(k+1,S);
			     
			}
			     chuaxet[i]=true;
			     S-=a[c[k-1]][c[k]];
		}
	}
}
main(){
	long long t;
	cin>>t;
	while(t-->0){
		cmin=100000;
	    ak=1;
	    memset(chuaxet,true,sizeof chuaxet);
	    //
		cin>>n;
		nhap();
		for(int i=1;i<=n;i++){
			chuaxet[i]=false;
			c[1]=i;
			ham(2,0);
			chuaxet[i]=true;
		}
		cout<<F<<endl;
	}
}
