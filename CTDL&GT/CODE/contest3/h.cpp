#include<bits/stdc++.h>
using namespace std;
string s;
long long S[10000],x,top=-1;
void push(long long x){
	top++;
	S[top]=x;
}
int empty(){
	return (top==-1);
}
int pop(){
	 top--;
}
main(){
	while(cin>>s){
		if(s=="push"){
			cin>>x;
			push(x);
		}
		else if(s=="pop"){
			if(!empty())pop();
		}
		else if(s=="show"){
			if(empty()) cout<<"empty";
			else{
			for(int i=0;i<=top;i++) cout<<S[i]<<" ";
			cout<<endl;
		  }
		}
	}
}
