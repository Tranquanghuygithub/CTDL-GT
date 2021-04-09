#include<bits/stdc++.h>
using namespace std;
#define Max 100005
#define  dd double
#define aa for(int i=1;i<=n;i++) cin>>A[i];
using namespace std;
long long n,c,d,A[Max];
void ham(){
	double S1=0,S2=0;
	long long j=0,q=0;
	for(int i=n;i>=1;i--){
		j++;
		if(j<=c) S1+=(double)A[i];
		else if(j>c&&q<d){
			q++;
			S2+=(double)A[i];
		}
		else  break;
	}
	double S=(S1/c+S2/d);
	cout<<fixed<<setprecision(6)<<S<<endl;
}
int main () {
	ios_base::sync_with_stdio(0);cin.tie(NULL);
  long long t;
  cin>>t;
  while(t-->0){
  	cin>>n>>c>>d;
  	aa;
  	if(c>d) swap(c,d);// c luon nho hon
  	sort(A+1,A+n+1);
  	ham();
  }
  
}
