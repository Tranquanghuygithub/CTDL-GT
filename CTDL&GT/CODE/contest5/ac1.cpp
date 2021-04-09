#include<bits/stdc++.h>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#define ll long long
#define db double
#define Max 2000005
using namespace std;
ll snt[Max];
ll S=0,n,A[2000005];
void sang(){
	for(int i=1;i<Max;i++) snt[i]=1;
	snt[1]=0;
	int i=2;
	while(i<=sqrt(Max)){
		while(snt[i]==0)i++;
		for(int j=2;j<=Max/i;j++) snt[i*j]=0;
		i++;
	}
}
void ham(ll m){
//	for(ll i=2;i<=m;i++){
//		while(m%i==0){
//			S+=i;
//			m=m/i;
//		}
//	}
     if(snt[m]) S+=m;
     else{
     	for(int i=2;i<=m;i++){
     		if(snt[i]){
     			while(m%i==0){
     				S+=i;
     				m=m/i;
				 }//end while
				 if(snt[m]){ S+=m; break;}
			 }//endl if
		 }//endl for
	 }//endl else
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(NULL);
	sang();
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>A[i];
		ham(A[i]);
	}
	cout<<S<<endl;
	
}



