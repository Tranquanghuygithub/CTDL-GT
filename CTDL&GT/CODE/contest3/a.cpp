#include<bits/stdc++.h>
using namespace std;
long long n,a[1000000],dem=0;
void nhap(){
	for(int i=1;i<=n;i++) cin>>a[i];
} 
main(){
	long long t;
	cin>>t;
	while(t-->0){
		cin>>n;
		dem=0;
		nhap();
		sort(a+1,a+n+1);
		long long j=n/2+1;
		long long i=1;
		while(j<=n&&i<=j){
			if(a[i]*2>a[j])j++;
			if(a[i]*2<=a[j]){
				j++;
				i++;
				dem++;
			}
		}
		cout<<(n-dem)<<endl;
	}
	
}
