// link : https://codeforces.com/contest/141/problem/A

#include <bits/stdc++.h>

using namespace std;

main (){

	string s1,s2,s3;

	cin>>s1>>s2>>s3;

	string s=s1+s2;

	sort(s.begin(),s.end());

	sort(s3.begin(),s3.end());

	if(s3==s) cout<<"YES";

	else cout<<"NO";}
