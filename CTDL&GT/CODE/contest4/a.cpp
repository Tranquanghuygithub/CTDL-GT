#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef struct{
	int mu;
	int heso;
}dathuc;
main(){
	ll t;
	cin>>t;
	cin.ignore();
	while(t-->0){
		dathuc a[1005],b[1005],c[1005];
		int na=0,nb=0,nc=0;
		string s1,s2;
		getline(cin,s1);
		getline(cin,s2);
		ll n=s1.length();
		for(int i=0;i<n;i++){
			if( s1[i]=='*'){
				int j=i-1, t=1, c=0;
				while( s1[j]>='0' && s1[j]<='9'){
					c+= ((int)s1[j]-48)*t;
					t*=10;
					j--;
				}
				a[na].heso=c;
			}
			if( s1[i]=='^'){
				int j=i+1,c=0;
                while( s1[j]>='0' && s1[j]<='9'){
                	c= c*10 +(int)s1[j]-48;
                	j++;
				}
				a[na++].mu=c;					
			}
		}
		n=s2.length();
//--------------
		for(int i=0;i<n;i++){
			if( s2[i]=='*'){
				int j=i-1, t=1, c=0;
				while( s2[j]>='0' && s2[j]<='9'){
					c+= ((int)s2[j]-48)*t;
					t*=10;
					j--;
				}
				b[nb].heso=c;
			}
			if( s2[i]=='^'){
				int j=i+1,c=0;
                while( s2[j]>='0' && s2[j]<='9'){
                	c= c*10 +(int)s2[j]-48;
                	j++;
				}
				b[nb++].mu=c;					
			}
		}
//------------------
      // thuc hien cong da thuc vois dieu kien
	  int i=0,j=0;
	  while(i<na && j<nb){
	  	if(a[i].mu>b[j].mu){
	  		c[nc++]=a[i++];
		}
		else{
			if(a[i].mu<b[j].mu){
				c[nc++]=b[j++];
			}
			else{
				c[nc].heso=a[i++].heso+b[j++].heso;
				c[nc++].mu= a[i-1].mu;
			}
		}
	  }
	  //van con lai bac cua a hoawc b
	  
	  while(i<na){
	  	c[nc++]=a[i++];
	  }	
	  while(j<nb){
	  	c[nc++]=b[j++];
	  }
	  //xuat
	  for(int k=0;k<nc-1;k++)
	     cout<<c[k].heso<<"*x^"<<c[k].mu<<" + ";
	     
	     cout<<c[nc-1].heso<<"*x^"<<c[nc-1].mu<<endl;
	}
}
