#include<bits/stdc++.h>
using namespace std;
long long n;
struct matrix{
	long long a[11][11];
};
void nhap(matrix &A){
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	cin>>A.a[i][j];
}
void xuat(matrix A){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<A.a[i][j]<<" ";
		}
		cout<<endl;
	}
}
matrix operator*(matrix b,matrix c){
	matrix res;
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++){
		res.a[i][j]=0;
	    for(int k=0;k<n;k++){
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
	long long k,t;
	cin>>t;
	while(t-->0){
	cin>>n>>k;
	matrix A;
	nhap(A);
	matrix tmp;
	tmp=power(A,k);
	xuat(tmp);
}
}
