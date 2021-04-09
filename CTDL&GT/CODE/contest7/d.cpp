#include<bits/stdc++.h>
using namespace std;

struct Graph{
	int s, e, w;
};

struct subset{
	int parent, rank;
};

Graph graph[200001];
subset k[200001];

bool cmp(Graph a, Graph b){
	if(a.w < b.w){
		return true;
	}
	return false;
}

int find(subset k[], int i){
	if(k[i].parent != i){
		k[i].parent = find(k, k[i].parent);
	}
	return k[i].parent;
}

void Union(subset k[], int x, int y){
	int a = find(k,x);
	int b = find(k,y);
	if(k[a].rank < k[b].rank){
		k[a].parent = b;
	}
	else if(k[a].rank > k[b].rank){
		k[b].parent = a;
	}
	else{
		k[b].parent = a;
		k[a].rank++;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, m;
		cin>>n>>m;
		for(int i=1; i<=m; i++){
			cin>>graph[i].s>>graph[i].e>>graph[i].w;
		}
		for(int i=1; i<=n; i++){
			k[i].parent = i;
			k[i].rank = 0;
		}
		sort(graph + 1, graph + m + 1, cmp);
		int e = 0;
		long long weight = 0;
		for(int i=1; i<=m; i++){
			int x = find(k,graph[i].s);
			int y = find(k,graph[i].e);
			//cout<<graph[i].s<<" "<<graph[i].e<<endl;
			//cout<<x<<" "<<y<<endl;
//			for(int j=1; j<=n; j++){
//				cout<<k[j].parent<<" ";
//			}
//			cout<<endl;
//			for(int j=1; j<=n; j++){
//				cout<<k[j].rank<<" ";
//			}
//			cout<<endl;
			if(x != y){
				e++;
				weight += graph[i].w;
				Union(k,x,y);
			}
			if(e == n-1)	break;
		}	
		cout<<weight<<endl;		
	}
	return 0;
}
