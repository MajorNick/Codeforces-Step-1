// link : https://codeforces.com/contest/459/problem/B

#include <bits/stdc++.h>

using namespace std;

long long n,a,b,c,d;



main (){

cin>>n;

long long v[n+1];

for(long long i=1;i<=n;i++) cin>>v[i];

sort(v+1,v+n+1);

long long j=0;

for(long long i=1;i<=n;i++){

if(v[1]==v[i]) j++;

else break;}

long long r=0;

for(long long i=n;i>=1;i--){

if(v[n]==v[i]) r++;

else break;}







long long ans1=v[n]-v[1],t=r*j;

if(v[1]==v[n]) t=n*(n-1)/2;
cout<<ans1<<" "<<t;}
