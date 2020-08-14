// link : https://codeforces.com/contest/148/problem/A

#include <bits/stdc++.h>
using namespace std;

int a,b,c,d,m;

main (){

cin>>a>>b>>c>>d>>m;

int ans=0;

for(int i=1;i<=m;i++){

	if(i%a==0||i%b==0||i%c==0||i%d==0) ans++;}


cout<<ans;}
