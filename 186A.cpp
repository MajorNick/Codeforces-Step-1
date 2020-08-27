// link : https://codeforces.com/problemset/problem/186/A

#include <bits/stdc++.h>

using namespace std;

string s1,s2,ds1,ds2;

main(){

cin>>s1>>s2;

if(s1.size()!=s2.size()){ cout<<"NO"; return 0;}

for(int i=0;i<s1.size();i++){

	if(s1[i]!=s2[i]) {ds1.push_back(s1[i]);ds2.push_back(s2[i]);}

//	else cout<<s1[i]<<" "<<s2[i]<<endl;

	}




if(ds1.size()!=2) {cout<<"NO"; return 0;}

if(ds1[0]==ds2[1]&&ds1[1]==ds2[0])cout<<"YES";
else

cout<<"NO";}



