#include<bits/stdc++.h>
using namespace std;
long long B[100005],A[100005],x=0;
long long n;
void init(){
		cin>>n;
		memset(A,0,sizeof(A));
		memset(B,0,sizeof(B));
		x=0;	
}
int ham(){
	queue <int> t0,t1,t2;
	for(int i=0;i<n;i++){
		if(A[i]%3==0) t0.push(A[i]);
		 if(A[i]%3==1) t1.push(A[i]);
	     if(A[i]%3==2) t2.push(A[i]);
	}
	int l0=t0.size(),l1=t1.size(),l2=t2.size();
	
	if(l2!=0&&l0==0&&l1==0) return -1;
	if(l1!=0 && l0==0 && l2==0 ) return -1;
	while(t1.size()>t2.size()) t1.pop();
	while(t1.size()<t2.size()) t2.pop();
	// thung 0;
	while( !t0.empty()){
		B[x++]=t0.front();
		t0.pop();
	}
	//thung 1
		while( !t1.empty()){
		B[x++]=t1.front();
		t1.pop();
	}
	//thung2
		while( !t2.empty()){
		B[x++]=t2.front();
		t2.pop();
	}
	return 0;
	
}
main(){
	long long t;
	cin>>t;
	while(t-->0){
		init();
	
		for(int i=0;i<n;i++){
			cin>>A[i];
		}
		//
		sort(A,A+n);
		
		if(ham()==-1) cout<<-1<<endl;
		//else if(k==0) cout<<0;
		else {
			sort(B,B+x);
			for(int i=x-1;i>=0;i--) cout<<B[i];
			cout<<endl;
		}
	}}
