// link : https://codeforces.com/contest/337/problem/A

#include <bits/stdc++.h>

using namespace std;

int n[55],a,b,c;

main(){

cin>>a>>b;

for(int i=1;i<=b;i++){

	cin>>n[i];}

sort(n+1,n+b+1);

int r=INT_MAX;

for(int i=1;i<=b-a+1;i++){
	
//	cout<<i<<endl;

	r=min(r,n[i+a-1]-n[i]);}

cout<<r;}

