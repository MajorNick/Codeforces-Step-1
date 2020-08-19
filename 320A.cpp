// link : https://codeforces.com/problemset/problem/320/A

#include <bits/stdc++.h>

using namespace std;

main (){

string s; cin>>s;

int n=s.size();

for(int i=0;i<n;i++){


	if(s[i]=='1'&&s[i+1]=='4'&&s[i+2]=='4') i=i+2;

	else{

		if(s[i]=='1'&&s[i+1]=='4') i=i+1;

		else {
			if(s[i]!='1') {cout<<"NO"; return 0;}


		}}}

cout<<"YES";}

