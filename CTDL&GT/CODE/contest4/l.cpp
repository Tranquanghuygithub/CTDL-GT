#include<bits/stdc++.h>
using namespace std;
int a[1005][1005];
int main(){
	string s1,s2;
	cin >> s1 >> s2;
	int len1, len2;
	len1=s1.length();
	len2=s2.length();
	//a[i][j] xau con chung tu  i kis tu trong s1 vaf j ki tu trong s2
	for(int i=0; i<len1; i++){
		for(int j=0; j<len2; j++){
			if(i==0||j==0)a[i][j]=0;
		    if(s1[i]==s2[j]){
				a[i+1][j+1] = a[i][j]+1;
			}
			else{
				a[i+1][j+1] = max(a[i+1][j], a[i][j+1]);
			}
		}
	}
	cout << a[len1][len2];
	return 0;
}
