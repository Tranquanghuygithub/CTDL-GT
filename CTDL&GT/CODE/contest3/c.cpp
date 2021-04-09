#include<bits/stdc++.h>
using namespace std;
struct matrix {
	long long a[2][2];
	matrix(){
		a[0][0]=0;
		a[0][1]=1;
		a[1][0]=1;
		a[1][1]=1;
	}
};
matrix operator*(matrix b,matrix c){
	matrix res;
	for(int i=0;i<2;i++)
	for(int j=0;j<2;j++){
		res.a[i][j]=0;
	    for(int k=0;k<2;k++){
	    	res.a[i][j]=(res.a[i][j]+b.a[i][k]*c.a[k][j])%(1000000007);
		}
	}
	return res;
}
matrix power(matrix A,long long n){
	if(n==1) return A;
	if(n%2!=0) return A*power(A,n-1);
	matrix tmp=power(A,n/2);
	if(n%2==0)return tmp*tmp;
}
int main(){
	long long n,t;
	cin>>t;
	while(t-->0){
	cin>>n;
	if(n==0){
		cout<<"0"<<endl;;
	}
	else{
	matrix A;
	A=power(A,n);
	cout<<A.a[0][1]<<endl;
}
}
	

}
