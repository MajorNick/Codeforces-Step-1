// link : https://codeforces.com/problemset/problem/61/A

#include <bits/stdc++.h>

using namespace std;

string s1,s2;

vector <int> v;

main (){

cin>>s1>>s2;

for(int i=s1.size()-1;i>=0;i--){

	if(s1[i]==s2[i]) v.push_back(0);

	else v.push_back(1);}

		
for(int i=v.size()-1;i>=0;i--) cout<<v[i];}
