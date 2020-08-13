// link : https://codeforces.com/problemset/problem/59/A

#include <bits/stdc++.h>

using namespace std;

string s;

int a,b,c,d,l,u;

main (){

cin>>s;

for(int i=0;i<s.size();i++){

	if(s[i]<='Z') u++;

	else l++;}


if(u>l){

	for(int i=0;i<s.size();i++){

		if(s[i]>'Z') s[i]-=' ';

		cout<<s[i];
	}}

	else{

		for(int i=0;i<s.size();i++){

			if(s[i]<='Z') s[i]+=' ';

			cout<<s[i];
		}
	}

}
