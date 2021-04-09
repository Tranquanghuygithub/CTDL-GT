#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m;
bool BFS(ll start, ll test[], vector<ll> graph[]){
	test[start] = 1;
	queue<ll> s;
	s.push(start);
	ll edge = 0, vert = 0;
	while(!s.empty()){
		ll temp = s.front();
		s.pop();
		vert++;
		for(ll i=0; i<graph[temp].size(); i++){
			if(!test[graph[temp][i]]){
				test[graph[temp][i]] = 1;
				s.push(graph[temp][i]);
			}
			edge++;
		}
	}
	edge /= 2;
	if(edge == (vert*(vert-1))/2){
		return true;
	}
	else return false;
}
void ham(){
		vector<ll> graph[n+1];
		ll test[n+1];
		memset(test,0,sizeof(test));
		for(ll i=1; i<=m; i++){
			ll a, b;
			cin>>a>>b;
			graph[a].push_back(b);
			graph[b].push_back(a);		
		}
		ll t=0;
		for(ll i=1; i<=n; i++){
			if(!test[i]){
				if(!BFS(i,test,graph)){
					t=1;
					break;
				}
			}
		}
		if(t)	cout<<"NO";
		else cout<<"YES";			
}
main(){
	ll t;
	cin>>t;
	while(t-->0){
		cin>>n>>m;
		ham();
		cout<<endl;
}
}
