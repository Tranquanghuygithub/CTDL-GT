#include<bits/stdc++.h>
using namespace std;
const int MAX=100005;
long long n,a[MAX];
void xuat(){
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<endl;
}
void RadixSort()
{
		long long i, b[MAX], m = a[0], exp = 1;
		for (i = 0; i < n; i++)
		{
			if (a[i] > m)
				m = a[i];
		}
		while (m / exp > 0)
		{
			int bucket[10] ={  0 };
			for (i = 0; i < n; i++)
				bucket[a[i] / exp % 10]++;
			for (i = 1; i < 10; i++)
				bucket[i] += bucket[i - 1];
			for (i = n - 1; i >= 0; i--)
				b[--bucket[a[i] / exp % 10]] = a[i];
			for (i = 0; i < n; i++)
				a[i] = b[i];
			exp *= 10;
		}
			xuat();
}
main(){
	//int n;
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	RadixSort();
}
