#include <bits/stdc++.h>
#define ll long long
#define FOR(i, a, b) for(int i = (a); i <= (b); i++)
#define FORD(i, a, b) for(int i = (a); i >= (b); i--)
#define fi first
#define se second
const int Base = 1e9+7;
const int N = 1e6+5;
using namespace std;
int a[N],c,d,n;
 
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>c>>d;
		FOR(i,1,n) cin>>a[i];
		
		sort(a + 1, a + n + 1);
		if(c<d) swap(c,d);
			long long s1=0;
			FORD(i,n,n-d+1) s1+=a[i];
			double s=0;
			s+=(double)s1/d;
			long long s2=0;
			FORD(i,n-d,n-d-c+1) s2+=a[i];
			s+=(double)s2/c;
			cout << fixed << setprecision(6) << s << endl;
	}
 
}
