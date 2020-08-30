// link : https://codeforces.com/contest/1059/problem/A

#include <bits/stdc++.h>

using namespace std;

#define F first

#define S second 


main (){

	int n,l,a,ln,ans=0;

	cin>>n>>l>>a;
pair<long long,long long> v[n+1];

v[n].S=0;

v[1].F=0;

	for(int i=1;i<=n;i++){

		cin>>v[i].F>>ln;

		v[i].S=v[i].F+ln;
		
		
	}

	
	

	ans+=v[1].F/a;

	int j=1;

	while(j<n){

		ans+=(v[j+1].F-v[j].S)/a;

		

		j++;}

	
		
	ans+=(l-v[n].S)/a;

	cout<<ans;}

