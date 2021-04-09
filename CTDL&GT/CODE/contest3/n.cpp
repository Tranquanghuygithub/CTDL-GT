#include<bits/stdc++.h>
using namespace std;
string s;
void ham(){
	int n=s.size();
	stack <int> a;
	long long dem=0;
	int d=0;
	for(int i=0;i<n;i++){
		if(s[i]==')') dem++;
		
		if(a.empty()) a.push(i);
		else{
			if(s[a.top()]=='('&&s[i]==')'){
				a.pop();
				d++;
			}
			else a.push(i);
		}
	}
	if(((dem-d))%2==0) cout<<(n-2*d)/2;
	else cout<<(n-2*d)/2+1;
}
main(){
	long long t;
	cin>>t;
	while(t-->0){
		cin>>s;
		ham();
		cout<<endl;
	}
}
