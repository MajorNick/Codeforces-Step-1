// link : https://codeforces.com/problemset/problem/133/A

#include <bits/stdc++.h>

using namespace std;

main (){

string s;
int t=0;

cin>>s;



for(int i=0;i<s.size();i++){

	if(s[i]=='H'||s[i]=='Q'||s[i]=='9'){ t++; break;}
}

if(t==0) cout<<"NO";

else cout<<"YES";}


