// link : https://codeforces.com/contest/227/problem/B

#include <bits/stdc++.h>

using namespace std;

long long  ar[100000],n,a,b;

main (){

cin>>n;

for(int i=0;i<n;i++){int x;  cin>>x; ar[x]=i+1;}

int k;

cin>>k;

while(k--){

	
	int d;

	cin>>d;

     
	a+=ar[d];
	b+=n-ar[d]+1;


}


cout<<a<<" "<<b;}
