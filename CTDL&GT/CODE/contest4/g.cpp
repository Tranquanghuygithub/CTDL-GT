#include <iostream>
#include <algorithm>
using namespace std;
 
struct data
{
	string name;
	int diem;
} typedef doibong;
 
int cmp (doibong a, doibong b)
{
	if (a.diem<b.diem) return 0;
	else if (a.diem==b.diem)
	{
		if (a.name>b.name) return 0;
	}
	return 1;
}
 
int main ()
{
	int t;
	cin>>t;
	for (int i=1; i<=t; i++)
	{
		int n;
		cin>>n;
		string myF, myO;
		cin>>myF>>myO;
		doibong N[25];
		int dMyF, dMyO;
		for (int i=1; i<=n; i++)
		{
			cin>>N[i].name>>N[i].diem;
			if (N[i].name==myF) dMyF=N[i].diem;
			if (N[i].name==myO) dMyO=N[i].diem;
		}
		int dF, dO;
		//TH1 Win;
		dF=dMyF+3;
		dO=dMyO+0;
		for (int i=1; i<=n; i++)
		{
			if (N[i].name==myF)
			{
				N[i].diem=dF;
			}
			if (N[i].name==myO)
			{
				N[i].diem=dO;
			}
		}
		sort (N+1, N+n+1, cmp);
 
		for (int i=1; i<=n; i++)
		{
			if (N[i].name==myF)
			{
				cout<<i<<" ";
				break;
			}
		}
 
		//TH3 lose;
		dF=dMyF+0;
		dO=dMyO+3;
		for (int i=1; i<=n; i++)
		{
			if (N[i].name==myF)
			{
				N[i].diem=dF;
			}
			if (N[i].name==myO)
			{
				N[i].diem=dO;
			}
		}
		sort (N+1, N+n+1, cmp);
		for (int i=1; i<=n; i++)
		{
			if (N[i].name==myF)
			{
				cout<<i<<" ";
				break;
			}
		}
 
		//TH2 draw;
		dF=dMyF+1;
		dO=dMyO+1;
		for (int i=1; i<=n; i++)
		{
			if (N[i].name==myF)
			{
				N[i].diem=dF;
			}
			if (N[i].name==myO)
			{
				N[i].diem=dO;
			}
		}
		sort (N+1, N+n+1, cmp);
		for (int i=1; i<=n; i++)
		{
			if (N[i].name==myF)
			{
				cout<<i;
				break;
			}
		}
 
		cout<<endl;
	}
	return 0;
}
