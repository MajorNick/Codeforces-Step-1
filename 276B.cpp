// link : https://codeforces.com/contest/276/problem/B

#include <bits/stdc++.h>

using namespace std;

string s;
int mp[26];

int a,b,c;

main (){

cin>>s;


for(int i=0;i<s.size();i++){

	mp[(int)s[i]-'a']++;}

for(int i=0;i<26;i++){

	if(mp[i]%2==1) a++;}
if (a>0) a--;
if(a%2==0) cout<<"First";

else cout<<"Second";








}