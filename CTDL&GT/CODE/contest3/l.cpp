#include<bits/stdc++.h>
using namespace std;
string s;
bool chuaxet[100000];
void ham(){
	stack<int>a;
	long long l=s.size();
	for(int i=0;i<l;i++){
		if(a.empty()){
			a.push(i);
		}
		else{
			if(s[a.top()]=='('&& s[i]==')'){
				chuaxet[a.top()]=false;
				chuaxet[i]=false;
				a.pop();
			}
			else a.push(i);
		}
	}
	long long dem=0;
	long long max=0;
	for(int i=0;i<l;i++){
		if(!chuaxet[i]) dem++;
		else dem=0;
		if(dem>max) max=dem;
	}
	cout<<max;
}
main(){
	long long t;
	cin>>t;
	while(t-->0){
		cin>>s;
		memset(chuaxet,true,sizeof chuaxet);
		ham();
		cout<<endl;
	}
}
