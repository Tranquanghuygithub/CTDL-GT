#include<bits/stdc++.h>
#include<stack>
using namespace std;
int ut(char s){
	if(s=='(') return 0;
	if(s=='+'||s=='-') return 1;
	if(s=='*'||s=='/'||s=='%') return 2;
	if(s=='^') return 3;
}
void ifix2postfix(string ifix){
	stack <char> S;
	int i=0;
	while(i<ifix.size()){
		char c=ifix.at(i);
		if(c!=' '){
			if(isalpha(c)) cout<<c;//c la toan hang
			else{
				if(S.empty()) S.push(c);
				if(c=='(') S.push(c);
				else{
					if(c==')'){//c la (
						while(!S.empty()&&S.top()!='('){
							cout<<S.top();
							S.pop();
						}
						if(!S.empty()) S.pop();						
					}
				else{//c la toan tu
					if(!S.empty()&&ut(S.top())>=ut(c)){
						cout<<S.top();
						S.pop();
					}
					S.push(c);
				 }
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
	int t;
	cin>>t;
	while(t-->0){
	string ifix;
	cin>>ifix;
	ifix2postfix(ifix);
	
	cout<<endl;
}
}
