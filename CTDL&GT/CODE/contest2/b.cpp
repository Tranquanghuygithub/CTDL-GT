#include<bits/stdc++.h>
using namespace std;
long long n,Min,ak=0,a[100000],stop=0;
void init(){
	for(int i=1;i<=13;i++)a[i]=0;
	a[14]=1;
}
void sinhnp(){
	int i=14;
	while(a[i]){
		a[i]=0;
		i--;
	}
	if(i==0) stop=1;
	else a[i]=1;
}
void check(){
	long long x=0;
	for(int i=1;i<=14;i++){
		if(!a[i])x*=10+0;
		else x=x*10+9;
	}
	if(x%n==0){
//		cout<<x<<endl;
	//	return;
		if(Min>x||ak==0){
			Min=x;
			ak=1;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t-->0){
		cin>>n;
		stop=0;
		ak=0;
		init();
		while(!stop){
			check();
			sinhnp();
		}
		cout<<Min<<endl;
		
	}
}
