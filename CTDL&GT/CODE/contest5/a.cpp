#include<bits/stdc++.h>
using namespace std;
int n,a[105];
void xuat(){
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<endl;
}
main(){
	//sap xep chon la moix 1 vonf lawp thi timf 1 gia tri nho nhay 
	//..tiep nhor thus 2 sau dos nho thu 3....
	//sau moi vong lap chi doi cho giua phan tu nhor thu x vaf soos caanf ddoi cho thooi ko ddcxao choon
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];

     int i, j, min_idx; 
     for (i = 0; i < n-1; i++) { 
        min_idx = i; 
       for (j = i+1; j < n; j++){ 
          if (a[j] < a[min_idx])
          min_idx = j;
    }
      swap(a[min_idx], a[i]);
      cout<<"Buoc "<<i+1<<":"<<" ";
      xuat();
   }
  
}
