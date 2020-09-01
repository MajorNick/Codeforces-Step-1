// link : https://codeforces.com/problemset/problem/1283/B

#include <bits/stdc++.h>

using namespace std;

int t;

main (){

cin>>t;

while(t--){

	int k,n;

	cin>>k>>n;
	
	
	int r=k-k%n;

	r+=min(n/2,k%n);

	cout<<r<<endl;

}}


