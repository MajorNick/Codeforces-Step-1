// link :https://codeforces.com/contest/34/problem/B

#include <bits/stdc++.h>

using namespace std;

int n,a,b,c;
main (){

cin>>n>>a;

vector <int>v(n);

for(int i=0;i<n;i++) cin>>v[i];

sort(v.begin(),v.end());

for(int i=0;i<a;i++){if(v[i]>0) break; b+=v[i]*-1;}

cout<<b;}