#include<bits/stdc++.h>
#include<list>
using namespace std;
main(){
	double p[]={1.0,2.0,3.0,4.0,5.0};
	list <double> a(p,p+5);
	//a.push_front(6);
	//a.push_back(6);
	
	list<double>::iterator firt_element=a.begin();
	// a.insert(firt_element,7);
   // a.erase(firt_element);//ko dc dde xoa trc khi chen vif xoa mat vi chi firt_element rooif ko the chen ddc
   // cout<<*(firt_element);//duf xoavi chi dau tien nhuwng no van in ra vi chi da xoas
//	a.insert(firt_element,7.0);//chen sau v chi firt element
    firt_element++;
    a.insert(firt_element,7);//chen vao trc firt_element
    cout<<*firt_element;
    //firt_element++;//nhu vay khi chen mac du xuat ra cos phan tu chenf co maf ko lamf maats vij chi bij chenf trong ki uc
   // cout<<*(firt_element);
   // cout<<*firt_element;
//cout<<*firt_element;
	for(firt_element=a.begin();firt_element!=a.end();firt_element++)
        cout<<*firt_element;
//        list<double>::iterator t=min_element(a.begin(),a.end());
//        cout<<*t;
}
