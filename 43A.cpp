// link : https://codeforces.com/contest/43/problem/A

#include <bits/stdc++.h>

using namespace std;

int a,b;



string s;

map<string,int> m;

main(){

cin>>a;

for(int i=0;i<a;i++){

	cin>>s;

	m[s]++;

}

string ans;

b=-1;
for(auto u:m){

	if(u.second>b){ b=u.second;ans=u.first;}

}

cout<<ans;}


	



