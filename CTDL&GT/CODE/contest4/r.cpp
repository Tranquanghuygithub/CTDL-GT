#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll A[9005][9005];
char s1[9005],s2[9005];
void ham(){
	ll len1=strlen(s1),len2=strlen(s2);
	for(ll i=0;i<len1;i++)
	for(ll j=0;j<len2;j++){
		if(i==0 || j==0) A[i][j]=0;
		if(s1[i]==s2[j]){
			A[i+1][j+1]= A[i][j]+1;
		}
		else {
			A[i+1][j+1]=max(A[i+1][j],A[i][j+1]);
		}
	}
	cout<<A[len1][len2]<<endl;
}
main(){
	int t;
	cin>>t;
	char c[5];
	gets(c);
	while(t-->0){
		gets(s1);
//		cin>>s1;
		strcpy(s2,s1);
		strrev(s1);
		ham();
		
	}
}
