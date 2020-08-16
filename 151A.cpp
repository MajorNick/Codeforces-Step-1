// link : https://codeforces.com/contest/151/submission/90135436

#include <bits/stdc++.h>

using namespace std;

int n,k,l,c,d,p,nl,np,t;

main (){

cin>>n>>k>>l>>c>>d>>p>>nl>>np;

int r=k*l;

int m=c*d;

while(m>0&&r>0&&p>0){


	m-=n;

	r-=n*nl;
	p-=np*n;

	t++;}
if(m<0||r<0||p<0) cout<<t-1;
else 
cout<<t;}
