// link : https://codeforces.com/problemset/problem/258/A
#include <bits/stdc++.h>

using namespace std;

string s;

main (){

cin>>s;

for(int i=0;i<s.size();i++){

	if (s[i]=='0') {s.erase(s.begin()+i); break;}


	if(i==s.size()-1) s.erase(s.begin+i);
}

cout<<s;}
