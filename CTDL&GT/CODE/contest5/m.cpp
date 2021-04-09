#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define aa for(int i=1;i<=n;i++) cin>>A[i];
#define bb for(int i=1;i<=n;i++) cin>>B[i];
ll A[105],B[105],n;
main(){
	cin>>n;
	aa;
	bb;
	sort(A+1,A+n+1);
	sort(B+1,B+n+1);
	for(int i=1;i<=n;i++){
		if(A[i]>B[i]){
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
}

