#include<bits/stdc++.h>
using namespace std;
int UT(char s){
	if(s=='('||s==')' ) return 0;
	if(s=='+'||s=='-' ) return 1;
	if(s=='*'||s=='/'||s=='%' ) return 2;
	if(s=='^' ) return 3;
}
void ifix2postfix(string ifix){
	stack <char> S;
	int i=0;
	while(i<ifix.size()){
		char c=ifix.at(i);
		if(c!=' '){
			if(S.empty()) S.push(c);
			else if(c=='(' ) S.push(c);
			else{
				if(isalpha(c)) cout<<c;
			    else if(c==')'){
			    	while(!S.empty()&&S.top()!='('){
			    		cout<<S.top();
			    		S.pop();
					}
					if(!S.empty()) S.pop();
				}
				else{
					//toan tu
					while(!S.empty()&&UT(S.top())>=UT(c)){
						cout<<S.top();
						S.pop();
					}
					S.push(c);
				}
			}
		}
		i++;
	}
	while(!S.empty()){
		if(S.top()!='(') cout<<S.top();
		S.pop();
 	}
}
main(){
	string ifix;
	int t;
	cin>>t;
	while(t-->0){
		cin>>ifix;
		ifix2postfix(ifix);
		cout<<endl;
	}
}
