#include<bits/stdc++.h>
using namespace std;
string s;
int chuaxet[100000];
void ham(){
	stack<int>a;
	long long l=s.size();
	for(int i=0;i<l;i++){
		if(a.empty()){
			a.push(i);
		}
		else{
			if(s[a.top()]=='('&& s[i]==')'){
				chuaxet[a.top()]=1;
				chuaxet[i]=1;
				a.pop();
			}
			else if(s[a.top()]=='['&& s[i]==']'){
				chuaxet[a.top()]=2;
				chuaxet[i]=2;
				a.pop();				
			}
			else if(s[a.top()]=='{'&& s[i]=='}'){
				chuaxet[a.top()]=3;
				chuaxet[i]=3;
				a.pop();			
			}
			else a.push(i);
		}
	}
	int p=0,q=0,r=0;
	for(int i=0;i<=l;i++){
		if(chuaxet[i]!=0){
			if(chuaxet[i]==1) p=1;
			if(chuaxet[i]==2) q=1;
			if(chuaxet[i]==3) r=1;
		}
		else if(p&&q&&r){
			cout<<"YES";
			return;
		}
		else if(chuaxet[i]==0){
			p=0;q=0;r=0;
		}
	}
	cout<<"NO";
	

}
main(){
	long long t;
	cin>>t;
	while(t-->0){
		cin>>s;
		memset(chuaxet,0,sizeof chuaxet);
		ham();
		cout<<endl;
	}
}
