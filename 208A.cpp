// link : https://codeforces.com/problemset/problem/208/A

#include <bits/stdc++.h>

using namespace std;

string s;

main (){

cin>>s;

for(int i=0;i<s.size();i++){

	if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B') {i+=2; cout<<" ";}

		else cout<<s[i];}


}
