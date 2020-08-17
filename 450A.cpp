// link : https://codeforces.com/problemset/problem/450/A

#include <bits/stdc++.h>

#define F first

#define S second

using namespace std;

int n,b,c,m;

main (){
	cin>>n>>m;

	vector <pair<int,int>> a(n);

for(int i=0;i<n;i++) {int g; cin>>g; a[i]=make_pair(g,i+1); }

int i=0;

while(a.size()>1){

	a[i].F-=m;

	if(a[i].F<=0){ a.erase(a.begin()+i);}
	
	else i++;
	
	
//	cout<<a[i].S<<endl;
	
	

	if(i>=a.size()) i=0;

}
cout<<a.size()<<endl;

cout<<a[0].S;}






