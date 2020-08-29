// link : https://codeforces.com/contest/1380/problem/A

#include <bits/stdc++.h>

using namespace std;

int a,b,c,t;

main (){

cin>>t;

while(t--){

int n;

	cin>>n;
c=0;
	vector<int>v(n+1);

	
	for(int i=1;i<=n;i++) cin>>v[i];

	for(int i=2;i<n;i++){
	
		if(v[i]>max(v[i-1],v[i+1])) {	

				cout<<"YES"<<endl<<i-1<<" "<<i<<" "<<i+1<<endl; break;}

				if(i==n-1)  cout<<"NO"<<endl;}}

				}


	
	
	
					
