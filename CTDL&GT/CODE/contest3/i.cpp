#include<bits/stdc++.h>
#include<stack>
using namespace std;
string s;
long long x;
main(){
	long long t;
	cin>>t;
	stack <int> S;
	while(t-->0){
		cin>>s;
		if(s=="PUSH"){
			cin>>x;
			S.push(x);
		}
		else if(!S.empty()&&s=="POP"){
			S.pop();
		}
		else if(s=="PRINT"){
			if(!S.empty())cout<<S.top()<<endl;
			else cout<<"NONE"<<endl;
		}
	}
}
