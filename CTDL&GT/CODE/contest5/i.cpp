#include<bits/stdc++.h>
using namespace std;
main(){
    int n,q,*A,*Q;
    cin>>n;
    A=new int[n];
    for(int i=0;i<n;i++) cin>>A[i];
    sort(A,A+n);
	cin>>q;
	Q=new int[q];
	for(int i=0;i<q;i++) cin>>Q[i];
	for(int i=0;i<q;i++){
		if(Q[i]<A[0]) cout<<0<<endl;
		else if(Q[i]>=A[n-1]) cout<<n<<endl;
		else cout<<upper_bound(A,A+n,Q[i])-A<<endl;
}
      delete [] A;
      delete [] Q;

}
