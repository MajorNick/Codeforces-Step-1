// link : https://codeforces.com/problemset/problem/233/A

#include <bits/stdc++.h>

using namespace std;

int n,a[100];

main (){

cin>>n;
if(n%2==1) cout<<"-1";
else{

for(int i=1;i<=n;i++){

 if(i%2==0) cout<<i-1<<" ";

 else cout<<i+1<<" ";} }}

