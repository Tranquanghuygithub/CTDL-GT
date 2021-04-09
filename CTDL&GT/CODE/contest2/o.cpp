#include<bits/stdc++.h>
using namespace std;
long long a[2];
void Min(){
	for(int i=0;i<2;i++){
		long n=a[i];
		long d=0;
		while(n>0){
			if(n%10==6)
			a[i]=a[i]-pow(10,d);
			d++;
			n/=10;
		}
	}
	cout<<a[0]+a[1]<<" ";
}
void Max(){
	for(int i=0;i<2;i++){
		long n=a[i];
		long d=0;
		while(n>0){
			if(n%10==5)
			a[i]=a[i]+pow(10,d);
			d++;
			n/=10;
		}
	}
	cout<<a[0]+a[1];
}
main(){
	for(int i=0;i<2;i++){cin>>a[i];}
	Min();
	Max();
}
