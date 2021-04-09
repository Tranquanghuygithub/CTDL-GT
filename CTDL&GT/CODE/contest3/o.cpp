#include<bits/stdc++.h>
using namespace std;
long long n;
main(){
		cin>>n;
		queue<int> a;
		while(n-->0){
			int lc;
			cin>>lc;
			switch (lc){
				case 1:{
					cout<<a.size()<<endl;
					break;
				}
				case 2:{
					if(a.empty()) cout<<"YES"<<endl;
					else cout<<"NO"<<endl;
					break;
				}
				case 3:{
					long long x;
					cin>>x;
					a.push(x);
					break;
				}
				case 4:{
					if(!a.empty()) a.pop();
					break;
				}
				case 5:{
					if(!a.empty()) cout<<a.front()<<endl;
					else cout<<"-1"<<endl;
					break;
				}
				case 6:{
					if(!a.empty()) cout<<a.back()<<endl;
					else cout<<"-1"<<endl;					
					break;
	
				}
			}
}}
