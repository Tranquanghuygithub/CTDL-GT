#include<bits/stdc++.h>
using namespace std;
string s;
int check(char s){
	if(s=='('||s==')')return 1;
	if(s=='{'||s=='}')return 2;
	if(s=='['||s=='}')return 3;
}
int ngoac(char s){
	if(s=='('||s=='['||s=='{') return 1;
	else return 0;
}
void ham(){
	int n=s.size();
	int t=0;
	stack<char> a;
	for(int i=0;i<n;i++){
		if(a.empty()) a.push(s[i]);
		else{
			if(ngoac(s[i])) a.push(s[i]);
			else{
				if(check(a.top())==check(s[i])){
					a.pop();
				}
				else{
					t=1;
					cout<<"NO";
					break;
				}
			}
		}
	}
	if(t==0) cout<<"YES";
}
main(){
	long long t;
	cin>>t;
	while(t-->0){
		cin>>s;
		ham();
	}
}
