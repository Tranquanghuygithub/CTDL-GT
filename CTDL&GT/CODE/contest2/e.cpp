#include<bits/stdc++.h>
using namespace std;
int n,k;
main(){
	cin>>n>>k;
	stack <int> S;
	for(int i=1;i<=n;i++){
		char s;
		cin>>s;
		int tmp=s-'0';
		if(S.empty()){
			S.push(tmp);
		}
		else{
		while(!S.empty()&&tmp>S.top()&&k>0) {
			S.pop();
			k--;
		}
		S.push(tmp);
	}
	}
	while(!S.empty()&&k>0){
		S.pop();
		k--;
	}
	vector <int> a;
	while(!S.empty()){
		int tmp=S.top();
		S.pop();
		a.push_back(tmp);
	}
	for(int i=a.size()-1;i>=0;i--) cout<<a[i];
}
