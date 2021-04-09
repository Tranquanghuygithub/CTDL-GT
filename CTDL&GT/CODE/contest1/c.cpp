#include<bits/stdc++.h>
using namespace std;
#define ll long long
string s;
void swap(char &a,char &b){
	char c;
	c=a;
	a=b;
	b=c;
}
int hv(){
	ll i=s.size()-2;
	ll length=s.size();
	//tim phan day giamdan
	while(s[i]-'0'>=s[i+1]-'0')i--;
	// tim phan tu doi cho
	if(i==-1) return 0;
	int j=length-1;
	while(s[i]-'0'>=s[j]-'0') j--;
	//doi cho 2 phan tu
	swap(s[i],s[j]);
	ll l=i+1,r=length-1;
	while(l<r){
		swap(s[l],s[r]);
	l++;
	r--;
	}
	return 1;
	
}
main(){
	ll t,k;
	cin>>t;
	while(t--){
		cin>>k;
		cin>>s;
		cout<<k<<" ";
		if(hv()) cout<<s<<endl;
		else cout<<"BIGGEST"<<endl;
	}
}
