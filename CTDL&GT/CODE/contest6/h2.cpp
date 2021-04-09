//xoa
#include<bits/stdc++.h>
using namespace std;
#define Max 1000000005
#define ll  long long

ll snt[Max];
void sangnt(){
	for(int i=1;i<Max;i++) snt[i]=1;
	snt[1]=0;
	int i=2;
	while(i<=sqrt(Max)){
		while(snt[i]==0) i++;
		for(int j=2;j<=Max/i;j++)	snt[i*j]=0;
		i++;
	}
}
main(){
	sangnt();
	for(int i=1;i<=20;i++){
		if(snt[i]==1) cout<<i<<" ";
	}
}
