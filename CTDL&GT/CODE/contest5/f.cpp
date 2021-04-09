#include<bits/stdc++.h>
#include<stack>
#define Max 100005
using namespace std;
long long n,A[Max],L[Max];
void min_left(){
	stack <int> S;
	A[0]=1e6;
	S.push(0);
	for(int i=1;i<=n;i++){
		while(!S.empty()&& A[S.top()]>A[i])S.pop();
		if(!S.empty()) L[i]=S.top();
		else L[i]=0;
		S.push(i);
	}
}
void ham(){
	long long dem=0;
	long long d=0,c=0,k=0;//d- caanj daauf cua day can tim,c-can cuoi cua day can tim
	for(long long i=1;i<=n;i++){
		if(i-(L[i]+1)>0){//L[i]+1  so xa nhat lown hown  sos thu i
			k++;
			if(k==1) d=L[i]+1;
			else d=min(L[i]+1,d);
		}
		if(i-L[i]-1>0) c=max(c,i);
	}
	if(d==0&&c==0) {
		cout<<"YES"<<endl;
		return;
	}
	int maxx=0;
	for(int i=d;i<=c;i++){
		if(A[i]>maxx) maxx =A[i];
	}
	//dem so phan tu con lai cua day can tim
	dem=c-d+1;
	for(int i=c+1;i<=n;i++){
		if(A[i]<maxx) dem++;
	}
		cout<<dem<<endl;
}
main(){
	long long t;
	cin>>t;
	while(t-->0){
		cin>>n;
		for(int i=1;i<=n;i++) cin>>A[i];
		min_left();
		ham();
	}
}
